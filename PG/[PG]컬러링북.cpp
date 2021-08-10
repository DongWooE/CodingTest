//bfs

#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int bfs(vector<vector<int>>picture, vector<vector<int>>&c, int m, int n){
    queue<pair<int,int>>q;
    q.push(make_pair(m,n));
    c[m][n] = 1;
    int cnt = 1;
    while(!q.empty()){
        pair<int,int>temp = q.front();
        int value = picture[temp.first][temp.second];
        q.pop();
        if(temp.first < picture.size()-1 &&     //현재를 기준으로 아랫쪽 원소탐색
           !c[temp.first+1][temp.second] &&     //미방문
            picture[temp.first+1][temp.second] == value){       //현재와 같아야함
            cnt++;
            c[temp.first+1][temp.second] = 1;   
            q.push(make_pair(temp.first+1, temp.second));
        }
        if(temp.second < picture[0].size()-1 &&     //현재를 기준으로 아랫쪽 원소탐색
           !c[temp.first][temp.second+1] &&     //미방문
            picture[temp.first][temp.second+1] == value){       //현재와 같아야함
            cnt++;
            c[temp.first][temp.second+1] = 1;   
            q.push(make_pair(temp.first, temp.second+1));
        }
        if(temp.second > 0 &&     //현재를 기준으로 왼쪽 원소탐색
           !c[temp.first][temp.second-1] &&     //미방문
            picture[temp.first][temp.second-1] == value){       //현재와 같아야함
            cnt++;
            c[temp.first][temp.second-1] = 1;   
            q.push(make_pair(temp.first, temp.second-1));
        }
        if(temp.first > 0 &&     //현재를 기준으로 위쪽 원소탐색
           !c[temp.first-1][temp.second] &&     //미방문
            picture[temp.first-1][temp.second] == value){       //현재와 같아야함
            cnt++;
            c[temp.first-1][temp.second] = 1;   
            q.push(make_pair(temp.first-1, temp.second));
        }
    }
    return cnt;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {

    vector<int>array;
        
    //checked 벡터 선언
    vector<vector<int>>c(m, vector<int>(n,0));
    
    //배열 탐색
    for(int i =0; i< picture.size(); i++){
        for(int j =0; j < picture[i].size(); j++){
            if(picture[i][j] && !c[i][j]){     //방문하지않고 '0'이 아니라면
                int cnt = bfs(picture,c,i,j);      
                array.push_back(cnt);  
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = array.size();
    answer[1] = *max_element(array.begin(), array.end());
    return answer;
}



//dfs

#include <vector>
#include <algorithm>
using namespace std;

int dfs(vector<vector<int>>picture,vector<vector<int>>&c,int m,int n){
    c[m][n] = 1;
    int value = picture[m][n];
    int cnt = 1;
    if(m !=0 && !c[m-1][n] && value == picture[m-1][n])   cnt += dfs(picture,c,m-1,n);
    if(n !=0 && !c[m][n-1] && value == picture[m][n-1])   cnt += dfs(picture,c,m,n-1);
    if(m != picture.size()-1 && !c[m+1][n] && value == picture[m+1][n])   cnt += dfs(picture,c,m+1,n);
    if(n != picture[0].size()-1 && !c[m][n+1] && value == picture[m][n+1])    cnt += dfs(picture,c,m,n+1);
    return cnt;
    }

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    
    vector<int>array;
    
    //방문 여부를 위한 checked 배열
    vector<vector<int>>c(m, vector<int>(n,0));
    
    for(int i =0; i < picture.size(); i++){
        for(int j =0; j < picture[i].size(); j++){        
            if(picture[i][j] && !c[i][j]){
                array.push_back(dfs(picture,c,i,j));
            }                         
        }
    }
    
    vector<int> answer(2);
    answer[0] = array.size();
    answer[1] = *max_element(array.begin(), array.end());
    return answer;
}