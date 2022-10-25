#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Max sub array Solution 
    Runtime : 274ms
    Memory Usage : 67.70MB
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
		int curr = 0,total = INT_MIN;
        for(int i=0; i<nums.size(); i++){
        	curr += nums[i];
        	total = max(total,curr);
        	curr = max(0,curr);
        }
        
        return total;
    }
};

/*
    Test Max sub array Solution
*/
int main(){
    Solution sol;
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    int total = sol.maxSubArray(vec);

    cout<<"Max subarray total : "<<total;
    cout<<endl;
	return 0;
}