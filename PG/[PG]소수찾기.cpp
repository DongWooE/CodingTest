#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
#include<algorithm>
#include<cmath>

using namespace std;
bool visited[7];
vector<int>result;
unordered_set<int>ans;
void permutation(vector<int>&array, int m) {
	if (result.size() == m) {
        string temp = "";
        for(int i =0; i< result.size(); i++){
            temp += to_string(result[i]);
        }
        ans.insert(stoi(temp));
		return;
	}
	for (int i = 0; i < array.size(); i++) {
		if (!visited[i]) {
			visited[i] = true;
			result.push_back(array[i]);
			permutation(array, m);
			result.pop_back();
			visited[i] = false;
		}
	}
}

vector<int>makeArray(string numbers){
    vector<int>temp;
    for(string::iterator it = numbers.begin(); it != numbers.end(); it++)
        temp.push_back(*it-'0');
    return temp;
}

void printArray(unordered_set<int>myset){
    for(auto i : myset)
        cout << i << "\n";
}

void primeNumber(unordered_set<int> myset, int &answer){
    for(auto value : myset){
        bool flag = true;
        if(value == 1 || value == 0) continue;
        for(int i = 2; i <= sqrt(value); i++){
            if((value%i)==0){
                flag = false;
                break;
            }
        }
        if(flag) answer++;
    }
}

int solution(string numbers) {
    int answer = 0;
    vector<int>array = makeArray(numbers);
    for(int i =1; i<=array.size(); i++){
        permutation(array, i);    
    }
    printArray(ans);
    primeNumber(ans, answer);    
     return answer;
}