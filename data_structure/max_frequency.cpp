
#include <iostream>
#include <unordered_map>
using namespace std;

void findFreq(int arr[],int size){
	unordered_map<int, int> map;
	for(int i=0; i<size; i++){
		map[arr[i]] = 0;
		for(int j=0; j<size; j++){
			if(arr[i] == arr[j]){
				map[arr[i]]++;
			}
		}
	}
	
	int max=0;
	for(const auto [key,value]:map){
		if(value>max){
			max=value;
		}
		cout<<key<<" --> "<<value<<endl;
	}
	cout<<"max frequency : "<<map[max]<<" , "<<max<<" times.";
}

int main(){
    int n = 13;
    int arr[n] = {1,2,2,3,3,3,4,5,5,5,5,5,4};
    
    findFreq(arr,n);
	cout<<endl;
    
    return 0;
}