#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i =1; i <= n/2; i++){
        int sum = 0;
        int j = i;
        while(1){
            sum += j;
            if(sum > n) break;
            else if(sum == n){
                answer++;
                break;
            }
            j++;
        }        
    }
    
    return answer+1;
}