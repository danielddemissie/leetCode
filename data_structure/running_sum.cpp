#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Running Sum Solution
    Runtime : 4ms
    Memory Usage : 8.50MB
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            nums[i] += nums[i - 1];
        }
        
        return nums;
    }
};

//Running Sum Test
int main(){
    Solution sol;
    vector<int> nums =  {1,2,3,4};
    for(const int& x : sol.runningSum(nums)){
        cout<<x<<" ";
    }

    cout<<endl;
    return 0;
}