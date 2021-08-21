#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string>combi;
void combination(string src, string crs, int depth) {
    if (crs.size() == depth) combi.push_back(crs);

    else for (int i = 0; i < src.size(); i++) {
        cout << "i : "  << i << " "<< src.substr(i + 1) << " " << crs + src[i] << "\n";
        combination(src.substr(i + 1), crs + src[i], depth);
    }
}

int main() {
    combination("ABCDE", "", 2);

    cout << "\n";
    for (auto i : combi)
        cout << i << "\n";
}