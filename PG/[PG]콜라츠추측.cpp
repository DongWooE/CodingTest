#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
    int answer = 0;
    long long number = num;
    while(answer < 500){
       if(number == 1) break;
        if(!(number %2)){     //짝수라면
            number /= 2;
        }else{
            number *= 3;
            number++;
        }
        answer++;    
    }
    
    if(answer >= 500) return -1;
    else return answer;
    }