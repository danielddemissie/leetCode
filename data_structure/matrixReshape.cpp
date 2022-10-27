#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
    Matrix Reshape Solution 
    Runtime : 14ms
    Memory Usage : 10.60MB
*/
class Solution{
    public:
        vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
            vector<vector<int>> newMatrix(r);
            int m = mat.size(),n = mat[0].size();
            if(m < 1 || r<1 || m*n != r*c){
                return mat;
            }

            for(int i=0; i<m*n; i++){
                int newRow = i/c;
                int newCol = i%c;

                int oldRow = i/n;
                int oldCol = i%n;

                newMatrix[newRow].resize(c);
                newMatrix[newRow][newCol] = mat[oldRow][oldCol];
            };

            return newMatrix;
        }
};

/*
    Test Matrix Reshape Solution
*/
int main(){
    Solution sol;
    vector<vector<int>> oldMatrix = {{1,2},{3,4},{5,6}};
    vector<vector<int>> newMatrix = sol.matrixReshape(oldMatrix,1,6);
    for(int i=0; i<newMatrix.size(); i++){
        for(int j=0; j<newMatrix[i].size(); j++){
            cout<<newMatrix[i][j]<<" ";
        }

        cout<<endl;
    }
    cout<<endl;
}