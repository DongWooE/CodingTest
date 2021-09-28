#include <string>
#include <vector>
#include <bitset>
#include <iostream>

using namespace std;

string getString(int num){
    string temp = "";
    while(num != 0){
        temp.insert(0, to_string(num%2));
        num /= 2;
    }
    return temp;
}

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    
    while(s != "1"){
        bitset<150000>n(s);
        int cnt = n.count();
        answer[1] += s.size() - cnt;
        answer[0]++;
        s = getString(cnt);
    }
    
    return answer;
}