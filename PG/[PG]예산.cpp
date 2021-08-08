#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    for(auto i : d){
        if(budget - i >= 0){
            answer++;
            budget -= i;
        }
        else break;
    }
    return answer;
}