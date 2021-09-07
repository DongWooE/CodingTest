#include <iostream>
#include <vector>
#include <queue>
#define INT_MAX 100000000
using namespace std;

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;
    
    vector<vector<pair<int,int>>>E(N);
    vector<int>d(N, INT_MAX);
    priority_queue<pair<int,int>> Q;
    
    for(auto r : road)  {
        E[r[0]-1].push_back(make_pair(r[1]-1, r[2]));
        E[r[1]-1].push_back(make_pair(r[0]-1, r[2]));
    }
    d[0] = 0;
    Q.push(make_pair(0,0));
    while(!Q.empty()){
        int cur = Q.top().first;
        int dis = -1 * Q.top().second;
        Q.pop();
        if(dis > d[cur]) continue;
        for(auto i : E[cur]){
            int next = i.first;
            int nextDis = i.second + dis;
            if(nextDis < d[next]){
                d[next] = nextDis;
                Q.push(make_pair(next, -1 * nextDis));
            }
        }
    }

    for(auto i : d){
        if(i <= K) answer++;
    }
    return answer;
}