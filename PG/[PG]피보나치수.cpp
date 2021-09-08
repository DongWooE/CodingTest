#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int F[100001] = {0, };
    if(n == 0) return 0;
    else if(n == 1) return 1;
    F[0] = 0;   F[1] = 1; 
    for(int i =2; i<=n; i++){
        F[i] = (F[i-1] + F[i-2])%1234567;
    }
    return F[n]%1234567;
}