#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> flag(priorities.size());
    int i = 0;
    while(1){
        int j = i;
        int max = i;
        do{
            j = (j+1)%priorities.size();
            if(j == max) continue; 
            if(flag[j] == 0 && priorities[j] > priorities[max])
                max = j;
        }while(i != j);
        answer++;
        flag[max] = 1;   
        if(location == max) break;
        int index =1;
        while(flag[(max+index)%priorities.size()] == 1) index++;
        i = (max+index)%priorities.size();             
    }
    return answer;
}