#include<string>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<int>mystack;
    
    for(auto i : s){
        if(mystack.empty() && i == ')') return false;
        else if(i == '(') mystack.push(i);
        else mystack.pop();
    }
    
    if(!mystack.empty()) answer = false;
    return answer;
}