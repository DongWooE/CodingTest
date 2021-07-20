#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int x = 3;
    int y;
    do{
        y = brown/2 +2 -x;
        if((x-2) * (y-2) == yellow) 
            if(x>=y) break;
        x++;        
    }while(y > 2);
    answer = {x,y};
    return answer;
}