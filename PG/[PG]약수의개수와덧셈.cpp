#include <string>
#include <vector>
#include <iostream>
using namespace std;

int findY(int value){
    if(value == 1) return 1;
    int sum = 2;
    for(int i = 2; i <= value/2; i++){
        if((value%i) == 0) sum++;}
    return sum;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++){
        if((findY(i)%2) == 0) answer += i;
        else answer -= i;
    }
    return answer;
}