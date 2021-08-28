#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int>bridge;
    vector<int>c(truck_weights.size(), 0);
    int index = 0, total = 0, check = 0; 
    while(1){
        answer++;
        if(bridge.size() == bridge_length){     //현재 다리 길이가 꽉 찬 상황
            total -= bridge.front();
            if(bridge.front()) c[check++] = 1;
            if(c[truck_weights.size()-1]) break; 
            bridge.pop();
        }
        if(index < truck_weights.size() 
           && total + truck_weights[index] <= weight){        //무게가 꽉 차지않은 상황
            bridge.push(truck_weights[index]);
            total += truck_weights[index];
            index++;
        }
        else{       //무게가 꽉 찬 상황
            bridge.push(0);
        }
    }
    return answer;
}