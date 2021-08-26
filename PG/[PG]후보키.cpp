#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

void combination(vector<string>&combi, string src, string crs, int depth){
    if(crs.size() == depth) combi.push_back(crs);
    else
        for(int i =0; i < src.size(); i++)
            combination(combi, src.substr(i+1), crs+src[i], depth);
}

int solution(vector<vector<string>> relation) {
    int answer = 0;
    set<string> com;
    int n = relation[0].size();
    vector<string>combi;
    
    //조합 만들기 
    string numbers = "01234567";
    string s = numbers.substr(0,n);
    for(int i =1; i<= n; i++)
        combination(combi, s, "", i);
    
    int index = 0;
    while(index < combi.size()){
        //유일성 검사
        bool status = true;
        for(int j = 0; j < relation.size(); j++){
            string temp = "";
            for(auto i : combi[index]) temp += (relation[j][i - '0'] + i);
            if(com.find(temp) == com.end()) com.insert(temp);
            else {  //만약 중복된 요소가 있다면
                status = false;
                break;
            }   
        }   
        if(status){     //중복된 것이 없는 유일함
            answer++;
            //최소성 검사
            int sub = index+1;
            while(sub < combi.size()){
                int cnt = 0;
                for(auto i : combi[index])
                    if(combi[sub].find(i) != string::npos) cnt++;
                if(cnt == combi[index].size()){
                    combi.erase(combi.begin()+sub);
                }
                else    sub++;
            }
        }
        index++;
        com.clear();
    }
    return answer;
}