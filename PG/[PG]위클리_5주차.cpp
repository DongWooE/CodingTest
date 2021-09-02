#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;

int returnIndex(char array[], char c){
    int i =0;
    for(; i < 5; i++)
        if(array[i] == c) break;
    return i;
}

int solution(string word) {
    int answer = 0;
    char c[] = {'A','E','I','O','U'};
    
    string cur = "";
    int cnt = 0;
    
    while(1){
        if(cur == word) return cnt;
        cnt++;
        if(cur.size() < 5) cur.push_back('A');
        else{
            if(cur.back() == 'U'){
                int i = cur.size()-1;
                for(; i >= 0; i--){
                    if(cur[i] != 'U') break;
                }
                if(i == -1) break;  //UUUUU
                else if(i == 0 && cur.size() == 5){     //AUUUU, EUUUU
                    int temp = returnIndex(c, cur[0]);
                    cur = c[temp+1];
                }
                else{       // U를 빼버린다
                    int temp = returnIndex(c, cur[i]);
                    cur[i] = c[temp+1];
                    cur.erase(cur.begin()+i+1, cur.end());
                    continue;
                }
            }
            else{       // size ==5 && 맨 뒤에 'U'가 오지않으므로 다음 원소로 
                int temp = returnIndex(c, cur[cur.size()-1]);
                cur[cur.size()-1] = c[temp+1]; 
            }
        }
    }
    return cnt;
}