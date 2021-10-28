#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    bool c = true;
    while(n--){
        if(c) answer += "수";
        else answer += "박";
        c = !c;
    }
    
    return answer;
}