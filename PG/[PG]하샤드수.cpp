#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    string str = to_string(x);
    int sum = 0;
    for(auto s : str){
        sum += s-'0';
    }
    if(x%sum == 0) answer = true;
    return answer;
}