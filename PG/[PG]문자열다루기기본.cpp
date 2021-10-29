#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for(auto i : s)
    if(i <= '9' && i >= '0') continue;
    else{ 
        answer = false;    
        break;
    }
    return answer;
}