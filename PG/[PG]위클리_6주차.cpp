#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct S {
    int index;
    double rate;
    int cnt;
    int weight;
};

bool compare(S a, S b){
    if(a.rate == b.rate){
        if(a.cnt == b.cnt){
            if(a.weight == b.weight){
                return a.index < b.index;
            }
            return a.weight > b.weight;
        }
        return a.cnt > b.cnt;
    }
    else return a.rate > b.rate;
}

vector<int> solution(vector<int> weights, vector<string> head2head) {
    vector<int> answer;
    vector<S>v;

    for(int i =0; i< weights.size(); i++){
        S temp;
        temp.index =i+1;
        int s =0, w =0;
        int hw = 0;
        for(int j =0; j< weights.size(); j++){
            if(i == j  || head2head[i][j] == 'N') continue;
            else if(head2head[i][j] == 'W'){
                w++;
                if(weights[j] > weights[i]) hw++;
            }
            s++;
        }
        if(s == 0) temp.rate = 0;
        else temp.rate = (double)w/s;
        temp.weight = weights[i];
        temp.cnt = hw;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), compare);

    for(auto i : v){
        answer.push_back(i.index);
    }    
    return answer;
}