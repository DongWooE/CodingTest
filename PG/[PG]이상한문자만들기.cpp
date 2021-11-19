#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int index = 0;
    string answer = "";
    for(auto &i : s){
        if(i == ' '){ 
            answer += ' ';
            index = 0;
        }
        else{
            if(index %2 ==0) answer += toupper(i);   
            else answer += tolower(i);
            index++;   
        }
    }
    return answer;
}