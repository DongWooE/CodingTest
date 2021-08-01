#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<char,string>> states;
    unordered_map<string, string>id;
    
    for(auto i : record){
        char state = i[0];
        
        int index;
        if(i[5] == ' ') index = 6;
        else index = 7;
        string uid = "";
        for(index; index < i.size(); index++){
            if(i[index] == ' ') break;
            uid += i[index];
        }
        index++;
        string nick = ""; 
        for(index; index < i.size(); index++){
            nick += i[index];
        }
        if(state != 'C') states.push_back(make_pair(state, uid));
        if(state != 'L'){
            auto it = id.find(uid);
            if(it != id.end()) it->second = nick;
            else id.insert(make_pair(uid, nick));
        }
    }
    
    for(auto i : states){
        string temp = "";
        auto it = id.find(i.second);
        temp += it->second;
        if(i.first == 'E') temp += "님이 들어왔습니다."; 
        else temp += "님이 나갔습니다.";
        answer.push_back(temp);
    }
    
    return answer;
}