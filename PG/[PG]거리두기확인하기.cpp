#include <string>
#include <vector>

using namespace std;

bool search1(vector<string> p, int r, int c){      //십자형 검사
    int x[4] = {-1,0,0,1};
    int y[4] = {0,-1,1,0};
    
    for(int i = 0; i< 4; i++){
        if(r + x[i] < 0 || r + x[i] > 4) continue;
        if(c + y[i] < 0 || c + y[i] > 4) continue;
        
        if(p[r+x[i]][c+y[i]] == 'P') return false;
        else if(p[r+x[i]][c+y[i]] == 'O'){
            if(x[i]){
                if(r+x[i]*2 <0 || r + x[i]*2 >4) continue;
                else    if(p[r+x[i]*2][c] == 'P') return false;
            }
            else{
                if(c+y[i]*2 <0 || c + y[i]*2 >4) continue;
                else    if(p[r][c+y[i]*2] == 'P') return false;
            }
        }
    }
    return true;
}

bool search2(vector<string> p, int r, int c){       //대각선 검사
    int x[4] = {-1,1,1,-1};
    int y[4] = {-1,1,-1,1};
    
    for(int i =0; i < 4; i++){
        if(r + x[i] < 0 || r + x[i] > 4) continue;
        if(c + y[i] < 0 || c + y[i] > 4) continue;
        
        if(p[r+x[i]][c+y[i]] == 'P'){
            if(p[r][c+y[i]] != 'X' || p[r+x[i]][c] != 'X') return false; 
        }
    }
    return true;
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    for(auto place : places){           //배열 하나
        int status = 1;
        for(int i =0; i < 5; i++){      //문자열 하나
            for(int j =0; j < 5; j++){      //문자 하나
                if(place[i][j] == 'P') 
                    if(!search1(place, i, j) || !search2(place,i,j)){
                        status = 0;
                        break;
                }
            }
            if(!status) break;
        }
        answer.push_back(status);
    }
    return answer;
}