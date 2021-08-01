#include<iostream>
using namespace std;

long long solution(int w,int h) {
    long long answer = 0;
    double inc = -1 * (double)h/w;
    for(int i = 1; i<= w-1; i++){
        int result = inc*i + h;
        answer += result;
    }
    answer *= 2;
    return answer;
}