#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<int>arr;
    for(int i =0; i < dungeons.size(); i++)
        arr.push_back(i);
    do{
        int cost = k, i = 0;
        for(; i < dungeons.size(); i++){
            if(cost >= dungeons[arr[i]][0]){   // 던전에 들어갈 수 있다면
                cost -= dungeons[arr[i]][1];
            }
            else break;     //던전에 들어갈 수 없다면
        }
        if(i > answer){
            answer = i;  
        } 
    }while(next_permutation(arr.begin(), arr.end()));
    
    return answer;
}