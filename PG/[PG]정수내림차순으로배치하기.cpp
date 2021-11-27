#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long weight = 10000000000;
    vector<int>v;
    bool status = false;
    
    while(weight){
        long long t = n/weight;
        if(t) status = true;
        if(status) v.push_back(t);
        n %= weight;
        weight /= 10;
    }
    
    long long w = 1;
    sort(v.begin(), v.end());
    for(auto i : v){
        answer += w*i;
        w *= 10;
    }
    return answer;
}