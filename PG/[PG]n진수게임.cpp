#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n, int t, int m, int p) {
    string answer = "";
    
    int i = 0;      //횟수
    int number = 0;     //십진법 수
    while(true){
        string str = "";
        int temp = number;
        while(temp >= n){
            int remain = temp%n;
            if(remain >= 10) str += "ABCDEF"[remain-10];
            else str += to_string(remain);
            temp = temp / n;
        }
        if(temp >= 10) str += "ABCDEF"[temp-10];
        else str += to_string(temp);
                
        for(auto it = str.rbegin(); it != str.rend(); it++){
            int remain = ++i % m;
            if(!remain) remain += m;
            if(remain == p)    answer += *it;   
            if(answer.size() == t){
                return answer;
            }
        }
        number++;
    }
}