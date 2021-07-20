#include <string>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

deque<int> createDeque(vector<int>people){
    deque<int>mydeque;
    for(auto i : people)
        mydeque.push_back(i);
    return mydeque;
}

void searchReverse(deque<int>&people, int limit, int &answer){
    while(!people.empty()){
        if(people.front() + people.back() > limit){
            people.pop_back();
            answer++;
        }
        else{
            if(people.size() == 1) people.pop_back();
            else{
                people.pop_front();
                people.pop_back();
            }
            answer++;
        }
    }
}


int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    deque<int> weights = createDeque(people);
    searchReverse(weights, limit, answer);
    return answer;
}