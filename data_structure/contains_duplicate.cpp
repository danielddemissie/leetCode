#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
    Contains Duplicate Solution 
    Runtime : 208ms
    Memory Usage : 51.40MB
*/
class Solution{
    public:
        bool containsDuplicate(vector<int>& nums){
            unordered_map<int,bool> map;
            for(int i=0; i<nums.size(); i++){
                if(map.count(nums[i])){
                    return true;
                }else{
                    map[nums[i]] = true;
                }
            }

            return false;
        }
};

/*
    Test Contains Duplicate Solution
*/
int main(){
    Solution sol;
    vector<int> test_nums;
    test_nums.assign(2,2);
    bool result =  sol.containsDuplicate(test_nums);
    
    cout<<"The given array : { ";
    for(auto x:test_nums){
        cout<<x<<" ";
    }

    if(result == 1){
        cout<<"} CONTAINS duplicate.";
    } else{
        cout<<"} DOESN'T CONTAIN duplicate.";
    }
    cout<<endl;
}