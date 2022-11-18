#include<iostream>
using namespace std;

/*
		find L.C.M for a number reverse 
*/
class Solution{
public:
	int gcd(int a, int b){
		if(b==0){
			return a;
		}

		return gcd(b,a%b);
	}

	int find_lcm_inverse(int num){
		int numReverse,lcm;
		string num_str = to_string(num);
		numReverse = stoi(string(num_str.rbegin(),num_str.rend()));
		if(max(numReverse,num) % min(numReverse,num) == 0 || num == numReverse){
			return max(numReverse,num);
		} 

		return (num/gcd(num,numReverse)*numReverse);
	}
};

int main(){
		Solution sol; 
		cout<<"GCM = ";
		cout<<sol.find_lcm_inverse(12);

		cout<<endl;
		return 0;
}
