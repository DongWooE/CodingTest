#include <string>
#include <vector>
using namespace std;

string solution(string phone_number) {
    int n = phone_number.size();
    string stars = "********************";
    stars = stars.substr(0,n-4);
    return stars + phone_number.substr(n-4, 4);
}