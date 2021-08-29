#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    int max = (a > b) ? a : b;
    int min;
    if(max != a) min = a;
    else min = b;
    long long sum = 0;
    for(int i = min; i <= max; i++)
        sum += i;
    return sum;
}