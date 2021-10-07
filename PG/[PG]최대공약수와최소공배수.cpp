#include <string>
#include <vector>

using namespace std;
int gcd(int x, int y){return x%y == 0 ? y : gcd(y, x%y); }
vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(n*m/answer[0]);
    return answer;
}