#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool status = false;
    for(auto i : s){
        if(i == ' '){
            status = false;
            answer.push_back(' ');
            continue;
        } 
        if(status && i >= 'A' && i <= 'Z') i += 32;
        if(!status){
            if(i >= 'a' && i <= 'z') i -= 32;
            status = true;            
        }
        answer.push_back(i);
    }
    return answer;
}