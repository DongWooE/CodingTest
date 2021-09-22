#include <string>
#include <vector>
#include<cctype>
#include<algorithm>
using namespace std;

int lower(char &c){
    return tolower(c);
}

void missF(vector<string>&c, string value, int &t){
    t += 5;
    c.pop_back();
    c.insert(c.begin(), value);
}

void hitF(vector<string>&c, string value, int &t){
    t += 1;
    int i =0;
    for(; i < c.size(); i++) if(c[i] == value) break;
    c.erase(c.begin() + i);
    c.insert(c.begin(), value);
}

bool findCity(vector<string>c, string value){
    for(auto i : c) 
        if(i == value) return true;
    return false; 
}

int solution(int cacheSize, vector<string> cities) {
    int t = 0;
    vector<string>c(cacheSize);
    if(!cacheSize) return cities.size() * 5;
    for(auto&city : cities) transform(city.begin(), city.end(), city.begin(), lower);
    
    for(auto city : cities){
        if(!findCity(c,city)) missF(c, city, t);
        else hitF(c, city, t);
    }
    
    return t;
}