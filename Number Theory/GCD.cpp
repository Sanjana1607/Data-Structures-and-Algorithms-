/*
Problem: GCD / HCF of Two Numbers

Approach:
- Use the Euclidean Algorithm to find the GCD of two numbers.
- Keep taking the remainder of the larger number divided by the smaller
  number.
- If a > b, replace a with a % b.
- Otherwise, replace b with b % a.
- Continue until one of the numbers becomes 0.
- The other non-zero number is the GCD.

Example:
gcd(20, 28)
→ gcd(20, 8)
→ gcd(4, 8)
→ gcd(4, 0)
→ 4

Time Complexity: O(log(min(a, b)))
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;
int gcd(int a, int b){
        int ans;
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
            }else{
                b=b%a;
            }
        }
        if(a==0){
          ans =b;
        }else{
          ans =a;
        }
        return ans ;
    }
int main(){
    cout<< gcd(20,28) ;
    
}