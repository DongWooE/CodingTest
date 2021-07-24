#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> char_stack;
    for(auto c : s) {
        if(char_stack.empty())
            char_stack.push(c);
        else {
            if(char_stack.top() == c)
                char_stack.pop();
            else
                char_stack.push(c);
        }
    }
    if(char_stack.empty())
        answer = 1;
    else
        answer = 0;

    return answer;
}