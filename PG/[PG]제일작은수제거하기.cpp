#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size() == 1) return {-1};
    else{
        int min = 0;
        for(int i =1; i < arr.size(); i++)
            if(arr[min] > arr[i]) min = i;
        arr.erase(arr.begin()+min);
        return arr;
    }
}