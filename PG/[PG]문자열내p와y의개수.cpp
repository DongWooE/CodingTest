#include <string>
using namespace std;

bool solution(string s)
{
    int cnt[2] = {0,0};
    for(int i =0; i < s.size(); i++){
        if((int)s[i] == 80 || (int)s[i] == 112) cnt[0]++;
        else if((int)s[i] == 89 || (int)s[i] == 121) cnt[1]++;
        else continue;
    }
    if(cnt[0] == cnt[1]) return true;
    else return false;
}