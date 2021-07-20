#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> student (3,0);
    int std1[5] = {1,2,3,4,5};
    int std2[8] = {2,1,2,3,2,4,2,5};
    int std3[10] = {3,3,1,1,2,2,4,4,5,5};

    for(int i =0; i< answers.size(); i++){
        int sol = answers[i];
        if( std1[i%5] == sol ) student[0]+=1;
        if( std2[i%8] == sol ) student[1]+=1;
        if( std3[i%10] == sol ) student[2]+=1;
    }
    
    int max = *max_element(student.begin(), student.end());
    for(int i = 0; i< 3; i++){
        if(max == student[i]) answer.push_back(i+1);
    }
    
    return answer;
}