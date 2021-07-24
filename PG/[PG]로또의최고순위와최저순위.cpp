#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zeroNum = 0;
    int staticNum = 0;
    vector<int>checked(45,0);
    for(auto i : lottos){
        if(i == 0)  zeroNum++;
        else{
            checked[i-1] = 1;
        }
    }
    for(auto i : win_nums){
        if(checked[i-1]) staticNum++;
    }
    answer.push_back((zeroNum+staticNum == 0) ? 6 : (7-zeroNum-staticNum));
    answer.push_back((staticNum== 0) ? 6 : (7-staticNum));
    return answer;
}
