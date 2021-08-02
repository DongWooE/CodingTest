#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(pair<int, double>a, pair<int, double>b){
    if(a.second == b.second) return a.first < b.first;
    return b.second < a.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> f(N, {0,0});
    
    for(auto i : stages){
        if(i > N) continue;
        f[i-1].second++;
    }

    int sum = f[0].second;
    f[0].second = f[0].second / stages.size();
    f[0].first = 1;
    for(int i =1; i< N; i++){
        f[i].first = i+1;
        int temp = f[i].second;
        if(!temp) continue;
        f[i].second = f[i].second / (stages.size()-sum);
        sum += temp;
    }
    
    sort(f.begin(), f.end(), compare);
    
    for(auto i : f){
        answer.push_back(i.first);
    }    
    return answer;
}