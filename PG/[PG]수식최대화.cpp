#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <iostream>
using namespace std;

long long calc(long long o1, long long o2, char c){
    switch(c){
        case '+':
            return o1+o2;
        case '-' :
            return o1-o2;
        case '*' :
            return o1*o2;
    }
}

long long solution(string expression) {
    long long answer = 0;
    int c[4] = {0,};
    vector<char>cond;
    vector<long long>number;
    vector<char>op;
    vector<long long>answers;

    string str = "";
    for(char i : expression){
        if(isdigit(i))  str += i;
        else{
            number.push_back(stoi(str));
            str = "";
            op.push_back(i);
            if(!c[i-'*'])   c[i-'*'] = 1;    
        }
    }
    number.push_back(stoi(str));
    
    for(int i =0; i < 4; i++)
        if(c[i])    cond.push_back(char(i+42));
    
    do{
        vector<char> copy_op = op;
        vector<long long> copy_number = number;
        for(auto c : cond){
            int i=0;
            while(i < copy_op.size()){
                if(copy_op[i] == c){
                    long long res = calc(copy_number[i], copy_number[i+1], c);
                    copy_number[i] = res;
                    copy_number.erase(copy_number.begin() + i +1);
                    copy_op.erase(copy_op.begin() + i);
                    if(copy_op.empty()) answers.push_back(copy_number[0]);
                }
                else i++;
            }
        }
    }while(next_permutation(cond.begin(), cond.end()));
    
    answer = (answers[0] < 0) ? -1 * answers[0] : answers[0]; 
    for(auto i : answers){
        i = (i <0) ? -1 * i : i;
        if(i > answer) answer = i;
    }
    
    return answer;
}