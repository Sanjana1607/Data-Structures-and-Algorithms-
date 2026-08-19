/*
Problem: 344. Reverse String
Link: https://leetcode.com/problems/reverse-string
Approach:
-We use two pointer approach
-One starts from the beginning and other from the end; then we simply swap the values
Time Complexity: O(n)
Space Complexity: O(1)

*/

#include <vector>
#include <utility>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size()-1;
        while(start<end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        
    }
};