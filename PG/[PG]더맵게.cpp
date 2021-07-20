#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

void printQueue(priority_queue<int, vector<int>, greater<int>> myqueue){
    while (!myqueue.empty()) {
        cout << " " << myqueue.top();
        myqueue.pop();
    }
    cout << "\n";
}

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int success = 0;

    priority_queue<int, vector<int>, greater<int>> myqueue;

    for(int i =0 ; i< scoville.size(); i++){
        myqueue.push(scoville[i]);
    }

    while(myqueue.size() >= 2){
        int first = myqueue.top();
        myqueue.pop();
        int second = myqueue.top();
        myqueue.pop();

        int mix = first + (second * 2);
        myqueue.push(mix);
        answer++;

        if(myqueue.top() >= K) {
            success = 1;
            break;        //성공했다면 바로 나간다
        }
    }
    if(success != 1) answer = -1;

    return answer;
}
