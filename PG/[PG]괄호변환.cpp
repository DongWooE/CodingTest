#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

vector<string> cutString(string w){
    int bal = 0;
    int index = 0;
    vector<string>temp;
    for(int i =0; i< w.size(); i++){
        if(w[i] == '(') ++bal;
        else --bal;
        if(bal == 0){
            index = i;
            break;
        }  
    }
    temp.push_back(w.substr(0, index+1));
    temp.push_back(w.substr(index+1));
    return temp;
}

bool isRight(string w){
    stack<int>mystack;
    for(auto i : w){
        if(i=='(') mystack.push(i);
        else{
            if(mystack.empty()) return false;
            else{
                mystack.pop();
            }
        }
    }
    if(mystack.empty()) return true;
    else return false;
}

string reverseString(string w){
    string temp = "";
    for(auto i : w){
        if(i=='(') temp.push_back(')');
        else temp.push_back('(');
    }
    return temp;
}

string solution(string p) {
    string answer = "";
    if(!p.size()) return "";
    vector<string>array = cutString(p);
    string u = array[0];
    string v = array[1];
    if(isRight(u)){
        return u + solution(v);
    }
    else{
        string temp = solution(v);
        u.erase(u.begin());
        u.pop_back();
        u = reverseString(u);
        return '('+temp+')'+u;
    }
    return answer;
}