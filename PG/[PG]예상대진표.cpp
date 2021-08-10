#include <iostream>
using namespace std;

int jump(int value){
    double temp = (double)value/2;
    if(temp > value/2) return temp+1;
    else return temp;
}

int solution(int n, int a, int b)
{
    int answer = 0;

    while(a != b){
        a = jump(a);
        b = jump(b);
        answer++;
    }
    return answer;
}