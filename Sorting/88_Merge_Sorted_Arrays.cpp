/*
Problem: 88. Merge Sorted Arrays
Link: https://leetcode.com/problems/merge-sorted-array
Approach:
-We have two sorted arrays, and nums1 has extra space at the end.
-Use three pointers: one for the end of the valid elements in nums1, one for the end of nums2, and one for the last position of nums1.
-Compare the elements from the end of both arrays.
-Place the larger element at the last available position in nums1.
-Continue until all elements of nums2 are placed.
-We fill from the end to avoid overwriting the unprocessed elements of nums1.
Time Complexity : O(m+n)
Space Complexity : O(1)
*/

#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = m+n-1, i = m-1, j= n-1;
        while(i>=0&&j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[index--] = nums1[i--];
    
            }else{
                nums1[index--] = nums2[j--];
            }
        }
        while(j>=0){
            nums1[index--] = nums2[j--];
        }
        
    }
};