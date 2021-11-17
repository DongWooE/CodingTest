#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s, int n) {
     string answer = "";
     for(auto i : s){
         if(i == ' '){
             answer += ' ';
             continue;
         }
         int temp = i + n;
         if(islower(i) && temp > 122) temp = 97 + (temp-123);
         if(isupper(i) && temp > 90) temp = 65 + (temp-91);
         answer += temp;
    }
    return answer;
}