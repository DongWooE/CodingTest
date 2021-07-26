#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i =2; i<= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    vector<bool> temp(nums.size(), true);
    for(int i =0; i< nums.size()-3; i++)
        temp[i] = false;
    do{
        int sum =0;
        for(int i =0; i< nums.size(); i++){
            if(temp[i]){
                sum += nums[i];
            }
        }
        if(isPrime(sum)){
            answer++;  
        } 
    }while(next_permutation(temp.begin(), temp.end()));

    return answer;
}