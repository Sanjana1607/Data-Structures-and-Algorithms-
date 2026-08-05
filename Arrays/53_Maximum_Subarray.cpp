/*
Problem: 53. Maximun Subarray
Link : https://leetcode.com/problems/maximum-subarray
Approach: 
-Use two pointers i and j, one at start other at end
-perform i+j
-if sum > target , shift right pointer to left, else vice - versa
Time Complexity : O(n)
Space Complexity : O(1)
*/
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum =0;
        int maxSum = INT_MIN ;
        for(int val : nums){
            currSum += val;
            
            maxSum = max(currSum, maxSum);
            if(currSum <=0)
                currSum = 0;
        }
        return maxSum;
    }
};