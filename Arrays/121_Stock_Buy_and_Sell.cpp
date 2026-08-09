/*
Problem: 121. Best time to buy and sell Stock
Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock
Approach: 
-Initialize bestbuy with the price on the first day. This represents the minimum stock price seen so far.
-Initialize maxprofit to 0.
-Traverse the array from the second day onwards.
-For each price:
-If the current price is greater than bestbuy, calculate the profit by selling on the current day (currentPrice - bestbuy) and update maxprofit if this profit is larger.
-Update bestbuy with the minimum of the current bestbuy and the current price, ensuring we always keep track of the lowest buying price seen so far.
-After traversing the array, return maxprofit.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0];
        int maxprofit = 0;
        int n = prices.size();
        for(int i = 1; i<n ; i++){
            if(prices[i]>bestbuy){
                
                maxprofit = max(maxprofit, (prices[i]-bestbuy));
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        return maxprofit;
    }
};