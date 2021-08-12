#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

bool returnResult(int p1, int p2, char c, int r){
    bool result = false;
    switch(c){
        case '=':
            if(abs(p1-p2)==r+1) result = true;
            break;
        case '>':
            if(abs(p1-p2)>r+1) result = true;
            break;
        case '<':
            if(abs(p1-p2)<r+1) result = true;
            break;
    }
    return result;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n, vector<string> data) {
    int answer = 0;
    vector<string>friends = {"A","C","F","J","M","N","R","T"};
    vector<string> p;
    do{
        string temp = "";
        for(auto i : friends)
            temp += i;
        p.push_back(temp);
    }while(next_permutation(friends.begin(), friends.end()));

    for(int i =0; i< p.size(); i++){
        bool status = true;
        for(int j =0; j < data.size(); j++){
            int pos1 = p[i].find(data[j][0]);
            int pos2 = p[i].find(data[j][2]);
            if(!returnResult(pos1,pos2,data[j][3],data[j][4]-'0')){
                status = false;
                break;
            }
        }
        if(status)  answer++;
    }
    return answer;
}
