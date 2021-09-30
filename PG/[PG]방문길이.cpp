#include <string>
#include <utility>
#include <iostream>
#include <set>
using namespace std;

string getString(pair<int,int>p1, pair<int,int>p2){
    string temp = "";
    temp += to_string(p1.first) + to_string(p1.second);
    temp += to_string(p2.first) + to_string(p2.second);
    return temp;
}

int solution(string dirs) {
    int answer = 0;
    int move_x[4] = {0,0,1,-1};
    int move_y[4] = {1,-1,0,0};
    char move[4] = {'U', 'D', 'R', 'L'};
    set<string>S;
    
    pair<int,int> cur = make_pair(0,0);
    for(auto d : dirs){
        for(int i =0; i <4; i++){
            if(move[i] == d){
                pair<int,int>last = cur;
                if(cur.first + move_x[i] > 5 || cur.first + move_x[i] < -5) break;
                if(cur.second + move_y[i] > 5 || cur.second + move_y[i] < -5) break;
                cur.first += move_x[i];
                cur.second += move_y[i];
                
                //edge들에 대해서 중복 여부 판단 
                string t1 = getString(last, cur);
                string t2 = getString(cur, last);
                if(S.count(t1) == 0 || S.count(t2) == 0){ 
                    S.insert(t1);
                    S.insert(t2);
                    answer++;
                }
                break;
            }
        }
    }
    
    
    return answer;
}