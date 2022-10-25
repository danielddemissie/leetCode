#include <iostream>
#include <vector>
using namespace std;

/*
    Pascal's Triangle Solution 
    Runtime : 13ms
    Memory Usage : 10.50MB
*/
class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> arr(numRows);

            for(int i=0 ; i<numRows ; i++){
                arr[i].resize(i+1);
                arr[i][0] = arr[i][i] = 1;
                
                for(int j=1 ; j<i ; j++){
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                }
            } 

            return arr;
        }
};

/*
    Test Pascal's Triangle Solution
*/
int main(){
    Solution sol;
    vector<vector<int>> arr =  sol.generate(5);
    for(int i=0; i<5; i++){
	 	for(int j=0; j<=i; j++){
	 		 cout<<arr[i][j]<<" ";
	 	}
	 	cout<<endl;
	} 
    cout<<endl;
	return 0;
}   