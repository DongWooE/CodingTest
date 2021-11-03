#include <iostream>
#include<string>
using namespace std;

int main(void) {
    int n= 1000;
    string star = "";
    while(n--) star += "*";
    int a, b;
    cin >> a >> b;
    string temp = star.substr(0,a);
    while(b--)  cout << temp << "\n";
    return 0;
}