/*
Problem: 9. Palindrome Number
Link: https://leetcode.com/problems/palindrome-number/

Approach:
- Negative numbers are not palindromes, so return false if x < 0.
- Store the original number in a separate variable `num`.
- Reverse the digits of `num` using the modulo (%) and division (/)
  operations.
- Compare the reversed number with the original number.
- If both are equal, the number is a palindrome; otherwise, return false.

Time Complexity: O(log₁₀(n))
Space Complexity: O(1)
*/
class Solution {
public:
    bool isPalindrome(long int x) {
        long int num = x;
        long int rev = 0, rem;
        while(num > 0){
            rem = num%10;
            rev = rev*10 +rem;
            num = num/10;
        }
        if(rev == x)
            return true;
        else
            return false;

        
    }
};