#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

string solution(int n) {
    string answer = "";
    stack<int>mystack;
    do{
        int temp = n %3;
        if(temp == 0){
            temp=4;
            n -=1;
        } 
        mystack.push(temp);
        n = n/3;
        if(n >=1 && n <3) mystack.push(n);
    }while(n >= 3);

    while(!mystack.empty()){
        answer+=to_string(mystack.top());
        mystack.pop();
    }
    return answer;
}