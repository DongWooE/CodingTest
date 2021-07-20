#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void deleteDuplicated(vector<int>&lost, vector<int> &reserve){
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    for(int i =0; i< lost.size(); i++){
        for(int j =0; j < reserve.size(); j++){
            if(lost[i] == reserve[j]){
                reserve.erase(reserve.begin()+j);
                lost.erase(lost.begin()+i);
                i--;
                j--;
                break;
            }
            else if(lost[i] < reserve[j]) break;
        }
    }
}

int borrow(vector<int>lost, vector<int> reserve){
    int remain = lost.size();
    vector<int>borrowed(reserve.size(), 0);
    
    for(auto i : lost){
        for(int j =0; j< reserve.size(); j++){
            if(!borrowed[j]){
                    if(reserve[j] == i-1){      //앞번 & 아직 아무도 빌리지않았을떄
                        remain--;
                        borrowed[j] =1;
                        break;
                    }   
                    else if(reserve[j] == i+1){        //후번 & 아직 아무도 빌리지않았을때
                        remain--;
                        borrowed[j] =1;
                        break;
                    }    
            }
        }
    }
    return remain;
}

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    deleteDuplicated(lost, reserve);
    int remain = borrow(lost, reserve);
    answer = answer - remain;
    return answer;
}