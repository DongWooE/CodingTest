#include <iostream>
#include <string>
#include <vector>

using namespace std;

void deleteLows(string& number, int &i) {
    for (int j = 0; j < i; j++) {
        if (number[j]< number[i]) {
            number.erase(number.begin() + j);
            i--;
            j--;
        }
    }
}

int findMin(string number, int value) {
    int min = 0;
    for (int i = 1; i < value; i++) {
        if (number[i] < number[min]) min = i;
    }
    return min;
}

void deleteMin(string& number, int &cnt, int &i) {
    while (cnt) {
        int index = findMin(number, i);
        number.erase(number.begin() + index);
        i--;
        cnt--;
    }
}

void searchingForLow(string& number, int& k) {
    for (int i = 0; i < number.size(); i++) {
        int cnt = 0;
        for (int j = 0; j < i; j++) {      //일단 그 원소보다 작은 애들의 개수를 파악함
            if (number[i] > number[j] && k > 0)   cnt++;
        }
        if (cnt <= k) {
            if (cnt == 0) continue;
            deleteLows(number, i);
            k -= cnt;
        }
        else if (cnt > k) deleteMin(number, k, i);
        if (k == 0) return;
    }
    //k가 아직 남아있는 경우
    int s = number.size();
    deleteMin(number, k, s);
}

string solution(string number, int k) {
    string answer = "";
    searchingForLow(number, k);
    return number;
}