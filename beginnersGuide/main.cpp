#include <iostream>
using namespace std;

int main(){
    //add two number
    class Solution{
        public:
        int sum(int num1,int num2){
            return num1+num2;
        }
    };
    Solution sl;
    cout<<"hello world\t"<<sl.sum(2,4)<<'\n';
}