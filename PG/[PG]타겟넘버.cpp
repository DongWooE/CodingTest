#include <string>
#include <vector>
using namespace std;
int answer = 0;
void dfs(vector<int> numbers, int n, int sum, int target){
    if(n == numbers.size()-1){
        if(sum == target){
            answer++;
        }
        return;
    }    
    n++;
    dfs(numbers,n,sum-numbers[n], target);
    dfs(numbers,n,sum+numbers[n], target);
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, -1, 0, target);
    return answer;
}