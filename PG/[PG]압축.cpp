#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    vector<string>c;
    
    for(char i = 'A'; i <= 'Z'; i++){     //사전 만들기
        string s = "";
        c.push_back(s+i);
    }   
    int i =0;
    while(i < msg.size()){
        int index = 0;
        int next;
        for(next = 1; next < msg.size(); next++){
            string str = msg.substr(i, next);       
            auto it = find(c.begin(), c.end(), str);
            if(it == c.end()){        //만약 찾지 못했다면
                c.push_back(str);
                next--;
                break;
            }
            else{                       //찾았다면
                index = it - c.begin();       //index값을 저장해두고 다음 것을 찾아본다
                continue;
            }
        }
        i += next;
        answer.push_back(index+1);
    }
    return answer;
}