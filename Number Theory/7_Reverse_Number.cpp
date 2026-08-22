/*
Problem: 7. Reverse Integer
Link: https://leetcode.com/problems/reverse-integer/

Approach:
- Use a variable `rev` to store the reversed number.
- Extract the last digit of x using `x % 10`.
- Before adding the digit to `rev`, check whether multiplying `rev`
  by 10 could cause an integer overflow.
- If `rev` is already too large or too small, return 0.
- Add the extracted digit to `rev` and remove the last digit from x
  using `x / 10`.
- Repeat until x becomes 0.
- Return the reversed number.

Time Complexity: O(log₁₀(n))
Space Complexity: O(1)
*/
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
         int rev = 0;
        while(x !=0){
            int digit = x%10;
            if(rev>= INT_MAX/10 || rev  <=INT_MIN/10){
                return 0;
            }
            rev = (rev*10)+digit;
            x= x/10;
        }
        return rev;
    }
};