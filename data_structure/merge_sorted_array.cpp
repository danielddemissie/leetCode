#include <iostream>
#include <vector>
using namespace std;

/*
    Merge Sort Solution 
    Runtime : 3ms
    Memory Usage : 9.10MB
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m; i<m+n; i++){
            nums1[i] = nums2[i-m]; 
        }
        if(nums1.size()>1){
            for(int i=0; i<m+n; i++){
                for(int j=i+1; j<n+m; j++){
                    if(nums1[j] < nums1[i]){
                        int temp = nums1[j];
                        nums1[j] = nums1[i];
                        nums1[i] = temp;
                    }
                }
            }
        }
    }
};

/*
    Test Merge Sort Solution
*/
int main(){
    Solution sol;
    vector<int> nums1 {4,5,6,0,0,0};
    vector<int> nums2 {1,2,3};
    int m=3,n=3;

    sol.merge(nums1,m,nums2,n);
    for(const int& x:nums1){
        cout<<x<<" ";
    }

    cout<<endl;
	return 0;
}   