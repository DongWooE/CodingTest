#include <string>
#include <vector>
#include <iostream>
#include <cctype>
#include <unordered_map>
using namespace std;

string numberName(int n){
    string result;
    switch(n){
        case 0 :
            result = "zero";
            break;
        case 1 :
            result = "one";
            break;
        case 2 :
            result = "two";
            break;
        case 3 :
            result = "three";
            break;
        case 4 :
            result = "four";
            break;
        case 5 :
            result = "five";
            break;
        case 6 :
            result = "six";
            break;
        case 7 :
            result = "seven";
            break;
        case 8 :
            result = "eight";
            break;
        case 9 :
            result = "nine";
            break;
    }
    return result;
}

unordered_map<string,int> makeMap(){
    unordered_map<string, int> mymap;
    for(int i =0; i< 10; i++){
        mymap.insert(make_pair(numberName(i), i));
    }
    return mymap;
}

string returnResult(string s, unordered_map<string,int>mymap){
    string result="";
    string temp ="";
    for(int i = 0; i< s.size(); i++){
        if(isdigit(s[i])){      //숫자가 나오면 이전꺼를 넣는다 
            if(temp.empty()){ 
                result += s[i];
            }
            else{
                result += to_string(mymap.find(temp)->second);
                result += s[i];
                temp.clear();
            }
            continue;
        }
        temp += s[i];
        if(temp.size() < 3) continue;
        else{
            auto it = mymap.find(temp);
            if(it != mymap.end()){
                result += to_string(it->second);
                temp.clear();
            }
            else    continue;
        }    
    }
    return result;
}

int solution(string s) {
    int answer = 0;
    unordered_map<string,int>stand = makeMap();
    string result = returnResult(s, stand);
    answer = stoi(result);
    return answer;
}