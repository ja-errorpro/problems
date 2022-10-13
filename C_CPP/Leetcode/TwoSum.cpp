#include <bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            if((mp.find(nums[i])) != (mp.end())){
                return {mp[nums[i]],i};
            }
            mp[(target-nums[i])]=i;
        }
}

int main()
{
    vector<int> s;
    s.assign({3,3});
    int target = 6;
    vector<int> ans = twoSum(s,target);
    for(auto i:ans) cout << i << ' ';
    

    return 0;
}