/*
Problem: 136. Single Number
Link: https://leetcode.com/problems/single-number
Approach:
- Initialize ans = 0.
- Traverse the array.
- XOR every element with ans.
- Duplicate elements cancel each other out.
- The remaining value is the unique element.

Time Complexity: O(n)
Space Complexity: O(1)

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        for (int val : nums) {
            ans ^= val;
        }

        return ans;
    }
};