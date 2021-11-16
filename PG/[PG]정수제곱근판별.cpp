#include <string>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if(!(sqrt(n) - int(sqrt(n)))){
        long long temp = sqrt(n);
        return (temp+1)*(temp+1);
    }
    else return -1;
    return answer;
}