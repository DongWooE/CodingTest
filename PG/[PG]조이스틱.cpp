#include <string>
#include <vector>
#include<algorithm>
#include<iostream>

using namespace std;

int findMinX(char c){
    return min((int)c-'A', (int)'Z'-c+1);
}

int findMinY(vector<int>array){
    int len = 0;        //A가 연속으로 나올때의 개수를 새는 변수
    int max_len = 0;    //A가 연속으로 나올때 그떄의 최댓값을 계산하는 변수
    int index = 0;      //A가 연속으로 나올때의 index값을 저장하는 변수
    int n = array.size();
    bool state = false;
    for(int i =1; i< n; i++){
        if(array[i] == 0){
            state = true;
            while(!array[i] && i<n){
                len++;
                i++;
            }
            if(len > max_len){
                max_len = len;
                index = i;
            }
            len=0;
        }
    }
    cout << index;
    if(!state){
        return n-1;
    }
    else if(index == n){        //연속된 A 뒤에 아무것도 없는 상황
        return n-(1+max_len);
    }
    else if((index - (max_len+1)) == 0){        //연속된 A가 첫번째 이후에 바로 나오는 경우
        return n-(1+max_len);
    }
    else{       //연속된 A가 두번쨰 이후에 나와서 결국 다시 돌아와야하는 경우
        return n-max_len;
    }
}

void printArray(vector<int>array){
    for(auto i : array)
        cout << i << " ";
}

int solution(string name) {
    int answer = 0;
    vector<int>alphaCount;
    
    for(auto str : name){
        int temp = findMinX(str);
        alphaCount.push_back(temp);
        answer += temp;
    }
    int result = findMinY(alphaCount);
    answer += result;
    return answer;
}