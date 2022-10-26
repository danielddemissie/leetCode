#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Best time to buy and sell stock Solution 
    Runtime : 136ms
    Memory Usage : 93.30MB
*/

class Solution{
    public:
        int maxProfit(vector<int>& prices){
            int curr_price = INT_MAX;
            int curr_profit = 0;
            int profit = 0;
            
            for(int i = 0; i < prices.size(); i++){
                curr_price = min(curr_price,prices[i]);
                curr_profit = prices[i] - curr_price;
                profit = max(curr_profit,profit);
            }

            return profit;
        }
};

/*
    Test Two Array Intersection II Solution
*/
int main(){
    Solution sol;
    vector<int> price {82,74,94,95,46,37,28};
    cout<<"Max Price : "<<sol.maxProfit(price);
    cout<<endl;
    return 0;
}