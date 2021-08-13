#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int>days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string>w = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int sum = 0;
    for(int i = 0; i < a-1; i++)
        sum += days[i];
    sum += b;
    return w[sum %= 7];
}