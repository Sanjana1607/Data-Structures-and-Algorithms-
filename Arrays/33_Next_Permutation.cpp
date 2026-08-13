/*
Problem: 31. Next Permutation
Link: https://leetcode.com/problems/next-permutation

Approach:
- Find the first element from the right which is smaller than the next element.
  This element is called the pivot.
- If no pivot is found, the array is in descending order, so reverse the
  entire array to get the smallest permutation.
- Find the first element from the right which is greater than the pivot
  and swap both.
- Reverse the elements after the pivot to get the next smallest permutation.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1, n = nums.size();
        for(int i = n-2 ; i>=0 ;i-- ){
            if(nums[i]<nums[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            int l = 0 , m = n-1;
            while(l<=m){
                swap(nums[l], nums[m]);
                l++;
                m--;
            }
            return;
        }
        for(int  i = n-1 ; i>=0 ; i--){
            if(nums[pivot] < nums[i]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        int i = pivot  +1  , j = n-1;
        while(i<=j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};