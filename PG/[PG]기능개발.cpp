#include <string>
#include <vector>
#include <queue>

using namespace std;

int ceiling(int a, int b){
    if((100-a)%b == 0) return (100-a)/b;
    else return (100-a)/b+1;
}

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> myqueue;

    for(int i =0; i< progresses.size(); i++){
        myqueue.push(ceiling(progresses[i], speeds[i]));        
    }
    while(!myqueue.empty()){
        int result = 1;
        int top = myqueue.front();
        myqueue.pop();
        while(!myqueue.empty() && myqueue.front() <= top){
            myqueue.pop();
            result++;
        }
        answer.push_back(result);
    }
    return answer;
}
