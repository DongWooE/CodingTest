#include <string>
#include <vector>
#include <iostream>

using namespace std;

int findMin(vector<vector<int>>v, vector<int>q){
    int min = v[q[0]-1][q[1]-1];
    for(int i = q[0]; i < q[2]; i++) if(min > v[i][q[1]-1]) min = v[i][q[1]-1];    
    for(int i = q[0]-1; i < q[2]; i++) if(min > v[i][q[3]-1]) min = v[i][q[3]-1];
    for(int i = q[1]; i < q[3]-1; i++) if(min > v[q[0]-1][i]) min = v[q[0]-1][i];
    for(int i = q[1]; i < q[3]-1; i++) if(min > v[q[2]-1][i]) min = v[q[2]-1][i];
    return min;
}

void rearrange(vector<vector<int>>&v, vector<int>q){
    vector<vector<int>>temp = v;
    for(int i = q[1]; i < q[3]; i++) v[q[0]-1][i] = temp[q[0]-1][i-1];
    for(int i = q[0]; i < q[2]; i++) v[i][q[3]-1] = temp[i-1][q[3]-1];
    for(int i = q[3]-2; i >= q[1]-1; i--) v[q[2]-1][i] = temp[q[2]-1][i+1];
    for(int i = q[2]-2; i >= q[0]-1; i--) v[i][q[1]-1] = temp[i+1][q[1]-1];
}   

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    
    vector<vector<int>>v(rows, vector<int>(columns,0));
    int value = 1;
    for(int i =0; i< rows; i++){
        for(int j =0; j < columns; j++){
            v[i][j] = value;
            value++;
        }
    }
    
    for(int i =0; i < queries.size(); i++){
        int min = findMin(v, queries[i]);
        answer.push_back(min);
        if(i == queries.size()-1) return answer;
        rearrange(v, queries[i]);
    }
    
    return answer;
}