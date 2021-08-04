#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int>number;
    while(n >= 3){
        number.push_back(n%3);
        n = n/3;
    }
    number.push_back(n);
    
    int s = number.size()-1;
    for(auto i : number){
        int temp = pow(3, s);
        answer += temp * i;
        s--;
    }
    return answer;
}