#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Two Array Intersection II Solution 
    Runtime : 13ms
    Memory Usage : 10.50MB
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        unordered_map<int, int> map;
        
        for(const int& x:nums1){
            map[x] +=1; 
        }

        for(const int& x:nums2){
            if(map[x]>0){
                intersection.push_back(x);
                map[x] -= 1;
            }
        }
        
        return intersection;
     }

};

/*
    Test Two Array Intersection II Solution
*/
int main(){
    Solution sol;
    vector<int> vec1 = {2,1,1};
    vector<int> vec2 = {1,1};

    vector<int> intersect = sol.intersect(vec1,vec2);
    cout<<"Intersecting elements  are : ";
    for(const int& x:intersect){
        cout<<x<<" ";
    }
    cout<<endl;
	return 0;
}