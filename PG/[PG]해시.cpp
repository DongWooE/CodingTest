#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

void makeMap(map<string,int>&closet, vector<vector<string>>clothes){
    for(auto i : clothes){
        auto it = closet.find(i[1]);
        if(it == closet.end()){
            closet.insert(make_pair(i[1], 1));
        }
        else{
            it->second++;
        }
    }
}
int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, int> closet;
    makeMap(closet, clothes);
    vector<int>temp;
    for(auto i : closet)    temp.push_back(i.second);

    if(*max_element(temp.begin(), temp.end()) == 1){
        int sum = 0;
        for(int i = temp.size()-1; i > 0; i--){
            sum += pow(2, i);
        }
        return sum+1;
    }
    vector<bool>cond(temp.size(), true);
    int r = 1;
    while(r <= temp.size()){
    for(int i =0; i< temp.size()-r; i++)
        cond[i] = false;
    do{
        int mid = 1;
        for(int i =0; i< temp.size(); i++){
            if(cond[i]) mid *= temp[i];
        }
        answer += mid;
    }while(next_permutation(cond.begin(), cond.end()));
        for(auto i : cond) i= true;
        r++;
    }
    return answer;
}