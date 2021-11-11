#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    long long v = 10000000000;
    bool status = false;
    while(v){
        int temp = n / v;
        if(temp && !status){ status = true;} 
        if(status) answer.push_back(temp);
        n %= v;
        v /= 10;
    }
    
    reverse(answer.begin(), answer.end());
    return answer;
}