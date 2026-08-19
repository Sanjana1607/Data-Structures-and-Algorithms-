/*
Problem: 125. Valid Palindrome
Link: https://leetcode.com/problems/valid-palindrome/

Approach:
- We use the two-pointer approach.
- One pointer starts from the beginning and the other from the end.
- We skip all non-alphanumeric characters from both sides.
- We convert both characters to lowercase and compare them.
- If the characters are different, the string is not a palindrome.
- If they are the same, we move both pointers towards the center.
- If we reach the center without finding a mismatch, the string is a palindrome.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <string>
#include <cctype>
using namespace std;
class Solution {
public:
    bool isAlphaNum(char ch){
        if((ch >= '0' && ch<='9')||(tolower(ch)>= 'a' && tolower(ch)<='z')){
            return true;
        }
        return false;
        
    }
    bool isPalindrome(string s) {
        int st = 0, end = s.length()-1;
        while(st<end){
            if(!isAlphaNum(s[st])){
                st++;
                continue;
            }
            if(!isAlphaNum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }
        return true;
        
    }
};