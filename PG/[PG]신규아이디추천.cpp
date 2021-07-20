#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool validateSign(char c){
    bool result = true;
    if(isdigit(c) || isalpha(c)) return true;
    switch(c){
        case '-' :
        case '_' :
        case '.' :
            break;
        default :
            result = false;
            break;
    }
    return result;
}

void deleteDot(string &id){
    if(id.front() == '.'){
        while(!id.empty() && id.front() == '.'){
            id.erase(id.begin());
        }
    }
    if(!id.empty() && id.back() == '.'){
        while(!id.empty() && id.back() == '.'){
            id.pop_back();
        }
    }
}

void changeId(string &id){
    int i = 0, j =0;
    while(1){
        while(i<id.size()){
            if(!validateSign(id[i]))    id.erase(id.begin()+i);     //2단계
            else{
                if(isupper(id[i])){     //1단계
                    id[i] = tolower(id[i]);
                }
                i++;
            }
        }
        while(j<id.size()){
            if(id[j] == '.'){
                j++;
                while(!id.empty() && id[j] == '.'){
                    id.erase(id.begin()+j);
                }
            }
            j++;
        }
        if(id.front() == '.' || id.back() == '.'){
            deleteDot(id);
        }
        if(id.size() == 0) id.push_back('a');
        else if(id.size() > 15){
            int cnt = id.size() - 15;
            while(cnt){
                cnt--;
                id.pop_back();
            }
            deleteDot(id);
        }
        else if(id.size() <= 2){
            int cnt = 3 - id.size();
            while(cnt){
                cnt--;
                id.push_back(id.back());
            }
        }
        else return;
    }    
}

string solution(string new_id) {
    string answer = "";
    changeId(new_id);
    return new_id;
}