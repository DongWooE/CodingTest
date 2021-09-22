#include <vector>

using namespace std;

vector<int> solution(vector<int> enter, vector<int> leave) {
    
    vector<int> answer(leave.size(), 0);
    int c[1000] = {0,};
    int cnt = 0;
    for(auto cur : leave){
        int i = 0;
        for(; i < leave.size(); i++){
            if(!c[enter[i]-1]) cnt++;
            if(cur == enter[i]) break;
        }
        for(int j =0; j <= i; j++)  
            if(!c[cur-1]){
                if(!c[enter[j]-1]){ 
                    answer[enter[j]-1] += i;
                    c[enter[j]-1] = 1;
                }
                else answer[enter[j]-1] += cnt;
            }
        enter.erase(enter.begin() + i);
        cnt = 0;
    }
    
    return answer;
}