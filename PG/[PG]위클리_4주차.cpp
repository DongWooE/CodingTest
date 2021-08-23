#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int hashFunc(string l){
    if(l == "JAVA") return 0;
    else if(l == "JAVASCRIPT") return 1;
    else if(l == "C") return 2;
    else if(l == "C++") return 3;
    else if(l == "C#") return 4;
    else if(l == "SQL") return 5;
    else if(l == "PYTHON") return 6;
    else if(l == "KOTLIN") return 7;
    else return 8;
}

string hashFunc(int n){
    string result = "";
    switch(n){
        case 0 : 
            result = "CONTENTS";
            break;
        case 1 : 
            result = "GAME";
            break;
        case 2 : 
            result = "HARDWARE";
            break;
        case 3 : 
            result = "PORTAL";
            break;
        case 4 : 
            result = "SI";
            break;
    } 
    return result;
}

string solution(vector<string> table, vector<string> languages, vector<int> preference) {
    string answer = "";
    int lang[9] = {0,};
    
    int score[5][5]={
        {3, 0, 1, 8, 4},
        {5, 2, 0, 7, 6},
        {6, 1, 6, 6, 5},
        {0, 4, 3, 1, 1},
        {1, 3, 2, 0, 0}
    };
    
    for(int i =0; i< languages.size(); i++){ 
        lang[hashFunc(languages[i])] = preference[i];
    }
        
    int v[5] = {0,};
    
    for(int i =0; i < 5; i++){
        int sum = 0;
        for(int j = 0; j< 5; j++)
            if(lang[score[j][i]])
                sum += lang[score[j][i]] * (j+1);        
        v[i] = sum;
    }
    
    int max = 5;
    for(int i =4; i>= 0; i--) if(v[max] <= v[i]) max = i;
        
    answer = hashFunc(max);
    return answer;
}