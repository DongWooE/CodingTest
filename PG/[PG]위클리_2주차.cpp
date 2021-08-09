#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<vector<int>> scores) {
    string answer = "";

    int s = scores.size();
    vector<double>avg;
    for(int i = 0; i < s; i++){
        int sum = 0;
        int stand = scores[i][i];
        int min_cnt = 0, max_cnt = 0;
        for(int j =0; j < s; j++){
            sum += scores[j][i];
            if(stand > scores[j][i]) max_cnt++;
            if(stand < scores[j][i]) min_cnt++;
        }
        if(max_cnt == (s-1) || min_cnt == (s-1)){
            sum -= stand;
            avg.push_back((double)sum/(s-1));
        }
        else{
            avg.push_back((double)sum/s);
        }
    }
    for(auto i : avg){
        int temp = i/10;
        answer += "FFFFFDDCBAA"[temp];
    }
    return answer;
}