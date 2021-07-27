#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int>myvec;
    int cnt =1;
    if(s.size() == 1) return 1;
    while(cnt <= s.size()/2){
        int index = 0;
        int sum = 0;
        int num =1;
        string temp = "";
        while(index + cnt <= s.size()){
            string sub = s.substr(index, cnt);
            if(temp.empty()) temp = sub;     //처음에 비어있다면 대입
            else if(temp == sub) num++;
            else{       //동일한게 존재하지않는다면
                string bef = temp;
                if(num != 1) sum += bef.size()+to_string(num).size();
                else sum += bef.size();
                temp = sub;
                num = 1;
            }
            index += cnt;
        }
        //이제 남은 문자열들을 처리
        string sub = s.substr(index);
        if(num != 1){       //마지막으로 중복되는 것들이 있었다
            if(temp != sub) sum += temp.size()+to_string(num).size()+sub.size();
            else sum += temp.size()+to_string(num).size();
            }
        else sum += temp.size()+sub.size();
        myvec.push_back(sum);
        cnt++;
    }
    answer = *min_element(myvec.begin(), myvec.end());
    return answer;
}