#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<int> v;
    string temp = "";
    for(auto i : s){
        temp += i;
        if(i == ' '){
            if(temp[0] == '-'){
                temp.erase(temp.begin());
                v.push_back(stoi(temp) *-1);
            }
            else    v.push_back(stoi(temp));
            temp = "";    
            continue;
        }
    }
    if(temp[0] == '-'){ 
        temp.erase(temp.begin());
        v.push_back(stoi(temp) *-1);
    }
    else v.push_back(stoi(temp));
    
    answer = (to_string(*min_element(v.begin(), v.end())) + " " + to_string(*max_element(v.begin(), v.end())));
    
    return answer;
}