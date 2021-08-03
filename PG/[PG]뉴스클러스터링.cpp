#include <string>
#include <cctype>
#include <vector>
#include <iostream>
using namespace std;

vector<string> makeArray(string&str){
    vector<string> myvector;
    for(int i =0; i< str.size()-1; i++){
        if(!isalpha(str[i]) || !isalpha(str[i+1])) continue;
        else{
            string temp = "";
            if(islower(str[i])) str[i] = toupper(str[i]);
            if(islower(str[i+1])) str[i+1] = toupper(str[i+1]);
            temp += str[i];
            temp += str[i+1];
            myvector.push_back(temp);
        }
    }
    return myvector;
}

int solution(string str1, string str2) {
    int answer = 0;
    int cnt = 0;
    vector<string> v1 = makeArray(str1);
    vector<string> v2 = makeArray(str2);
    vector<int> visited1(v1.size(), 0);
    vector<int> visited2(v2.size(), 0);
    int sum = v1.size() + v2.size();
    for(int i =0; i< v1.size(); i++){
        for(int j =0; j < v2.size(); j++){
            if(!visited1[i] && !visited2[j] && v1[i] == v2[j]){
                cnt++;
                visited1[i] =1;
                visited2[j] = 1;
                break;
            }
        }
    }
    if(!(sum-cnt)) return 65536;
    answer = (double)65536 * (double)cnt/(sum-cnt);
    return answer;
}