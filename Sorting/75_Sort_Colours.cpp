/*
Problem: 75. Sort Colours
Link: https://leetcode.com/problems/sort-colors
Approach:
-We take 3 pointers, low, mid and high
-Initially assume entire array to be unsorted
-If mid = 0 , exchange with low and increment both
-If mid = 1, increament mid
-If mid = 2 , exchange with high and decrement high
Time Complexity: O(n)
Space Complexity: O(1)

*/
#include <vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid =0, high=nums.size()-1, low=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};