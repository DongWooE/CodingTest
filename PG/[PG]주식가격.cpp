#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i =0; i< prices.size(); i++){
        int result = 0;
        for(int j = i+1; j < prices.size(); j++){
            result++;
            if(prices[i] - prices[j] > 0) break;
        }
        answer.push_back(result);
    }
    return answer;
}