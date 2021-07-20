#include <string>
#include <vector>
#include<iostream>
#include<cmath>

using namespace std;

vector<int> findLocation(int number){
    int x = abs(number%3);
    if(x == 0) x = 3;
    if(number == 0) x = 2;
    
    int y;
    if(number <= 0 ) y = 0;
    else if(number >=1 && number <=3) y = 3;
    else if(number >= 4 && number <= 6) y = 2;
    else y = 1;
    
    cout << " x : " << x << " y : " << y <<"\n";
    return {x,y};
}

int calcFunc(vector<int> compare1, vector<int> compare2){
    int sum = 0;
    sum += abs(compare1[0] - compare2[0]);
    sum += abs(compare1[1] - compare2[1]);
    return sum;
}

string selectFunc(int &curLeft, int &curRight, int value, string hand){
    
    vector<int> compareLeft = findLocation(curLeft);
    vector<int> compareRight = findLocation(curRight);
    vector<int> compare = findLocation(value);
    
    int sumLeft = calcFunc(compare, compareLeft);
    int sumRight = calcFunc(compare, compareRight);

    if(sumLeft > sumRight){
        curRight = value;
        return "R";
    } 
    else if(sumLeft < sumRight){
        curLeft = value;
        return "L";  
    } 
    else{
        if(hand == "left"){
            curLeft = value;
            return "L";
        } 
        else {
            curRight = value;
            return "R";
        }
    }
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int curLeft = -1;
    int curRight = -3;
    vector<vector<int>> location;
    
    for(int i =0; i< numbers.size(); i++){
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7){
            answer+= "L";    
            curLeft = numbers[i]; 
        }
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9){
            answer+= "R";
            curRight = numbers[i];
        }
        else{
            answer+= selectFunc(curLeft, curRight, numbers[i], hand);
        }
    }
    
    return answer;
}