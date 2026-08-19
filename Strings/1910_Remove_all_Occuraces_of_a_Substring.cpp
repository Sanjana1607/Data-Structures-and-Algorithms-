/*
Problem: 1910. Remove All Occurrences of a Substring
Link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

Approach:
- We repeatedly search for the given substring `part` in the string `s`.
- If `part` is found, we remove it using the `erase()` function.
- We continue this process until `part` is no longer present in `s`.
- Finally, we return the modified string.

Time Complexity: O(n²)
Space Complexity: O(n)
*/
#include <string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.find(part)<s.length()){
            int st = s.find(part);
            s.erase(st, part.length());
        }
        return s;
    }
};