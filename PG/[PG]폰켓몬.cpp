#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int>myset;
    
    for(int i =0; i<nums.size(); i++){
        myset.insert(nums[i]);   
    }
    if(myset.size() > nums.size()/2 ) return nums.size()/2;
    return myset.size();
}