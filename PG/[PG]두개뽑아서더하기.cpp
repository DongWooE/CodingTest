#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int> array;
    for( int i =0; i< numbers.size(); i++){
        for( int j =0; j< numbers.size(); j++){
            if( i == j ) continue;
            int temp = numbers[i] + numbers[j];
            array.push_back(temp);            
        }
    }
    sort( array.begin(), array.end());
    
    for( int i =0; i< array.size(); i++){
        if( i == 0) {answer.push_back(array[i]); continue;}
        if( array[i] != array[i-1]) answer.push_back(array[i]);
    }
    return answer;
}