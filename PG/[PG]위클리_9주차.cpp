#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int bfs(vector<vector<int>> E, int v1, int v2){     //v1과 v2를 제외하고 남은 edge 탐색 계산
    int cnt = 0;        // v1과 v2가 없을 시에 갈 수 있는 edge 개수
    int n = E.size();
    queue<int>Q;
    vector<int>c(n, 0);
    Q.push(0);
    while(!Q.empty()){
        int temp = Q.front();
        c[temp] = 1;
        Q.pop();
        for(auto i : E[temp]){
            if(c[i]) continue;
            if(temp == v1 && i == v2) continue;
            if(temp == v2 && i == v1) continue;
            Q.push(i);
        }
        cnt++;
    }
    
    return ((n-cnt) > cnt) ? (n-2*cnt) : (2*cnt-n); 
}


int solution(int n, vector<vector<int>> wires) {
    vector<int>ans;
    vector<vector<int>>E(n);     
    
    for(int i =0; i < wires.size(); i++){
        E[wires[i][0]-1].push_back(wires[i][1]-1);
        E[wires[i][1]-1].push_back(wires[i][0]-1);
    }
    
    int index = 0;
    for(int i =0; i < wires.size(); i++){
        int temp = bfs(E, wires[i][0]-1, wires[i][1]-1);
        ans.push_back(temp);
    }
    
    return *min_element(ans.begin(), ans.end());
}