#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    
    for(auto number : numbers){
        long long temp = number;
        long long cnt = 0;
        long long rest = temp %2; 
        temp /= 2;
        while(rest != 0){
            cnt++;
            rest = temp %2;
            temp /= 2;
        }
        if(cnt == 0){
            answer.push_back(number+1);
            continue;
        }
        answer.push_back(number + pow(2, (cnt-1)));
    }
    return answer;
}