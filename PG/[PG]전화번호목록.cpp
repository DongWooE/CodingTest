#include <string>
#include <vector>
#include<set>
#include<algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end());

    for(int i =0; i< phone_book.size()-1; i++){
        int temp = phone_book[i].size();
        string str;
        str. assign(phone_book[i+1], 0, temp);
        if(str == phone_book[i]) return false;
    }
    return answer;
}