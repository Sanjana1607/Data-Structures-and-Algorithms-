/*
Problem: 204. Count Primes
Link: https://leetcode.com/problems/count-primes/

SIEVE OF ERATOSTHENES
Approach:
- Use the Sieve of Eratosthenes to find all prime numbers less than n.
- Create a boolean array `isPrime` where initially every number is
  considered prime.
- Traverse the numbers from 2 to n-1.
- If `isPrime[i]` is true, then i is prime, so increment the answer.
- Mark all multiples of i as non-prime.
- Start marking from i * i because smaller multiples have already been
  marked by smaller prime numbers.
- Return the total count of prime numbers less than n.

Time Complexity: O(n log log n)
Space Complexity: O(n)
*/
#include <vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        vector <bool> isPrime(n+1, true);
        int ans =0;
        int j=1;
        for(int i=2; i<n; i++){
            if(isPrime[i]){
                ans++;
                for(int j = i*2; j<n; j=j+i){
                isPrime[j]=false;
                }
            }
            
        }
        return ans;
    }
};