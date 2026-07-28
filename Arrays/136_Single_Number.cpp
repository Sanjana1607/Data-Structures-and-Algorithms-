/*
Problem: 136. Single Number
Link: https://leetcode.com/problems/single-number
Approach:
- XOR every element of the array.
- Duplicate elements cancel each other out.
- The remaining value is the unique element.

Time Complexity: O(n)
Space Complexity: O(1)

*/
#include <vector>
using namespace std;
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