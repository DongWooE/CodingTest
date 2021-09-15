#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(auto i : arr) answer += i; 
    return answer/arr.size();
}