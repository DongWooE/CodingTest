#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> array;
    for(auto num : numbers){
        array.push_back(to_string(num));
    }
    
    sort(array.begin(), array.end(), compare);
    if(array[0] == "0") return "0";
    for(auto str : array){
        answer += str;
    }
    return answer;
}