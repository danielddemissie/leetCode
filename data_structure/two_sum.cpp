#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/*
    Two Sum Solution 
    Runtime : 696ms
    Memory Usage : 10.10MB
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for(int i = 0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                result.push_back(i);
                result.push_back(j);

                break;
                }
            }
        }

        return result;
    }
};

/*
    Test Two Sum Solution
*/
int main(){
    Solution sol;
    vector<int> arr {3,2,1,5};

    for(const int& x:sol.twoSum(arr,8)){
        cout<<x<<" ";
    }
    cout<<endl;
	return 0;
}