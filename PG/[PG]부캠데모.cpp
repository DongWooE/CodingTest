#include <iostream>
#include <vector>
using namespace std;

void search(vector<vector<int>>& array, int value){
    int i;
    for(i =0; i< array.size(); i++){
        if(array[i][0] == -1){
            break;
        }
        if(array[i][0] == value){
            array[i][1]++;
            return;
        }
    }
    array[i][0] =value;
    array[i][1]++;
}


vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;
    vector<vector<int>>x(2, vector<int>(2,-1));
    vector<vector<int>>y(2, vector<int>(2,-1));
    
    for(int i =0; i< v.size(); i++){
        search(x, v[i][0]);
        search(y, v[i][1]);
    }
    
    for(int i =0; i< x.size(); i++){
        for(int j =0; j< x[i].size(); j++)
            cout << x[i][j] << " ";
    }
    
    for(int i =0; i<2; i++){
        if(x[i][1] != 1){
            ans.push_back(x[i][0]);
            break;
        }
    }
    
    for(int i =0; i<2; i++){
        if(y[i][1] != 1){
            ans.push_back(y[i][0]);  
            break;
        }
    }
    return ans;
}