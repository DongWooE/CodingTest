#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    map<string, int> ans;
    int max[10] = {0,};
    for(auto i : orders){
        sort(i.begin(), i.end());
        for(auto r : course){
            vector<bool>c (i.size(), true);
            if(r > i.size()) break;
            for(int j = 0; j < i.size()-r; j++) c[j] = false;
                do{
                    string temp = "";
                    for(int a = 0; a < c.size(); a++){
                      if(c[a]) temp += i[a];
                    }  
                    ans[temp]++;
                }while(next_permutation(c.begin(), c.end()));
            }
    }
    
    for(auto i : ans){
        if(i.second < 2) continue;
        if(i.second > max[i.first.size()-1]) max[i.first.size()-1] = i.second;
    }
    
    for(auto i : ans)
        if(max[i.first.size()-1] == i.second) answer.push_back(i.first); 
    return answer;
}