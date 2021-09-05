#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int v[1001][1001] = {0,};
    
    int last = 0;
    for(int i =1; i <= n; i++){
        last += i;
    }
    
    int row = 0, col = 0;
    int c[] = {n, n-1, n-2};
    int cur = 0;
    while(1){
        for(int i = 0; i <c[0]; i++, row++) v[row][col] = ++cur;
        row--;
        col++;
        for(int i = 0; i <c[1]; i++, col++) v[row][col] = ++cur;
        col--;
        row--; col--;
        for(int i =0; i < c[2]; i++, row--, col--)  v[row][col] = ++cur;
        row+=2; col++;
        if(cur == last) break;
        for(int i =0; i < 3; i++) c[i] -= 3; 
    }
    
    for(int i=0; i < n; i++){
        for(int j = 0; j <= i; j++){
            answer.push_back(v[i][j]);
        }
    }
    
    return answer;
}