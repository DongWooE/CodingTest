#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

int getMin(vector<int> arr){
    int num = 2;
    int n = *max_element(arr.begin(), arr.end());
    vector<pair<int,int>> v;
    while(num <= n){
        int cnt = 0;
        for(auto i : arr) if(i%num == 0) cnt++;
        if(cnt > 1) v.push_back(make_pair(num, cnt));
        num++;
    }
    
    if(v.empty()) return 0;
    else{
        pair<int,int> t = v[0];
        for(int i =1; i < v.size(); i++)
            if(t.second <= v[i].second) t= v[i];
        return t.first;
    }
}

int solution(vector<int> arr) {
    int answer = 1;
    vector<int> v;
    while(true){
        int min = getMin(arr);
        if(!min) break;
        else {
            v.push_back(min);
            for(auto &j : arr){
                if(j % min == 0) j /= min; 
            }
        }
    }
    
    for(auto i : arr) answer *= i;
    for(auto i : v) answer *= i;
    return answer;
}