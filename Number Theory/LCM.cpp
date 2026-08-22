/*
Problem: LCM of Two Numbers

Approach:
- First find the GCD of the two numbers using the Euclidean Algorithm.
- The Euclidean Algorithm repeatedly replaces the larger number with
  the remainder until the second number becomes 0.
- The remaining non-zero number is the GCD.
- Use the formula LCM = (a * b) / GCD(a, b) to calculate the LCM.
- Print the calculated LCM.

Time Complexity: O(log(min(a, b)))
Space Complexity: O(log(min(a, b)))  // due to recursive GCD calls
*/
#include <iostream>
using namespace std;
int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b, a%b) ;
    }
int main(){
    int a = 5;
    int b = 10;
    int lcm = (a*b)/gcd(a,b);
    cout<<"lcm = " << lcm  ;
    
}