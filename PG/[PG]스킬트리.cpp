#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int c[26] = {0,};       //방문 배열
    
    for(auto s : skill) c[s-65] = 1;
    
    for(auto s : skill_trees){
        string temp = skill;
        bool status = true;
        for(auto i : s){
            if(c[i-65]){
                if(i == temp[0]){
                    temp.erase(temp.begin());
                }
                else{
                    status = false;
                    break;
                }
            }
        }
        if(status) answer++;
    }
    
    return answer;
}
