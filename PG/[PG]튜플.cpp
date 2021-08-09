#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

bool cmp(vector<int>a, vector<int>b){
    return a.size() < b.size();
}

vector<int> solution(string s) {
    vector<int> answer;
    vector<vector<int>>t;
    vector<int>temp;
    for(int i=1; i< s.size()-1; i++){
        if(isdigit(s[i])){
            string str = "";
            while(isdigit(s[i])){
                str += s[i];
                i++;
            }
            temp.push_back(stoi(str));   
        }
        if(s[i] == '}'){
            t.push_back(temp);
            temp.clear();
        }
    }
    sort(t.begin(), t.end(), cmp);
    
    vector<int>visited(100000, 0);
    for(auto i : t){
        for(auto j : i){
            if(!visited[j]){
                visited[j] =1;
                answer.push_back(j);
            }
        }
    }
    
    return answer;
}