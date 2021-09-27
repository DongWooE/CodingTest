#include <string>
#include <vector>
#include <iostream>

using namespace std;

int returnCnt(int n){
    int cnt = 0;
    while(n != 0){
        if(n%2 == 1) cnt++; 
        n = n/2;
    }
    return cnt;
}

int solution(int n) {
    int cnt = returnCnt(n);
    while(true){
        if(cnt == returnCnt(++n)) return n;
    }
}