#include <string>
#include <vector>
#include<map>
#include<iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    map<string, int>m;
    map<string, int>::iterator it;

    for(int i =0; i< completion.size(); i++){
        it = m.find(completion[i]);
        if(it == m.end()) m.insert(make_pair(completion[i], 1));
        else it->second +=1;
    }

    for(int i =0; i< participant.size(); i++){
        it = m.find(participant[i]);
        if(it == m.end()){
            answer = participant[i];
            break;
        }
        it->second -=1;
        if(it->second < 0){
            answer = it->first;
            break;
            }
        }
    return answer;
}
