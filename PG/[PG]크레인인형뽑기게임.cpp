#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int s = board.size();
    stack<int>mystack;

    int p;
    int condition = 0;
    for(int i =0; i<moves.size(); i++){
        int index = moves[i]-1;
        for(int j=0; j<s ; j++){
            if(board[j][index] == 0) continue;
            p = board[j][index];
            board[j][index] =0;
            condition = 1;
            break;
        }
        if(condition == 1){
            if( mystack.empty() || mystack.top() != p ) mystack.push(p);
            else{
                mystack.pop();
                answer +=2;
            }
            condition = 0;
        }
    }
    return answer;
}