#include <iostream>
#include<string>
using namespace std;
int solution(int n)
{
    string temp = to_string(n);
    int answer = 0;
    for(auto i : temp){
        answer += i-'0';
    }
    
    return answer;
}