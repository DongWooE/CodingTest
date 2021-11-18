#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

int m;
using namespace std;

bool compare(string a, string b){
    if(a[m] < b[m]) return true;
    else if(a[m] == b[m])   return a < b;
    else return false;
}

vector<string> solution(vector<string> strings, int n) {
    m = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}