#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    set<string> myset;
    
    char last = *words[0].rbegin();
    myset.insert(words[0]);
    
    int cur = 0;
    int cnt = 1;
    for(int i =1; i < words.size(); i++){
        cur = (cur+1)%n;
        cnt = (i/n+1);
        if(words[i][0] != last || myset.count(words[i]) != 0)
            return {cur+1, cnt};
        myset.insert(words[i]);
        last = *words[i].rbegin();
    }
    return {0,0};
}