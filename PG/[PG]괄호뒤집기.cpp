#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

const string str = "({[)}]";    

bool isRight(stack<char>&mystack,char value){
    size_t pos = str.find(value);       // stack top
    if(pos < 3) mystack.push(value);
    else{
        if(mystack.empty()) return false;
        else {
            size_t pos2 = str.find(mystack.top());    
            if((pos-pos2) == 3) mystack.pop();
            else return false;   
        }
    }
    return true;
}

void rotate(string &s){
    char temp = s[0];
    s.erase(s.begin());
    s.push_back(temp);
}

int solution(string s) {
    int answer = 0;    
    stack<char>mystack;
    for(int i =0; i < s.size(); i++){
        if(str.find(s[0]) >= 3){ 
            rotate(s);     
            continue;
        }
        mystack.push(s[0]);
        bool flag = true;
        for(int j =1; j < s.size(); j++){
            if(!isRight(mystack,s[j])){
                flag = false;
                break;
            }
        }
        if(mystack.empty() && flag) answer++;
        rotate(s);
    }
    
    return answer;
}