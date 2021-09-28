#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int len[2] = {0,0};     //0-> max, 1-> min
    for(auto s : sizes){
        len[0] = (len[0] >= max(s[0],s[1])) ? len[0] : max(s[0], s[1]);
        len[1] = (len[1] >= min(s[1],s[0])) ? len[1] : min(s[1], s[0]);
    }
    return len[0] * len[1];
}