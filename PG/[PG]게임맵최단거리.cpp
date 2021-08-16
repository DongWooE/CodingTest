#include<vector>
#include<queue>
#include<utility>
#include<iostream>
using namespace std;
int solution(vector<vector<int> > maps)
{
    const int n = maps.size();
    const int m = maps[0].size();
    vector<vector<int>>c(n, vector<int>(m, 0));
    queue<pair<int,int>>Q;
    int x_list[4] = {0,1,0,-1};
    int y_list[4] = {1,0,-1,0};
    Q.push(make_pair(0,0));
    c[0][0] =1;
    while(!Q.empty()){
        pair<int,int>t = Q.front();
        Q.pop();
        int cnt = c[t.first][t.second];
        if(t.first == n-1 && t.second == m-1) return cnt;
        for(int i =0; i < 4; i++){
            int x = t.first + x_list[i];
            int y = t.second + y_list[i];
            
            if(x == n || x == -1) continue;
            if(y == m || y == -1) continue;
            if(c[x][y] || !maps[x][y]) continue;
            else {
                Q.push(make_pair(x, y));
                c[x][y] = cnt+1;
            }
        }
    }    
    return -1;
}