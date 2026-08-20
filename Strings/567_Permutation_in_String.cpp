/*
Problem: 567. Permutation in String
Link: https://leetcode.com/problems/permutation-in-string/

Approach:
- We first count the frequency of each character in s1 using an array of size 26.
- The length of s1 is the required window size.
- We then check every substring of s2 having the same length as s1.
- For each window, we count the frequency of its characters.
- We compare the frequency array of s1 with the frequency array of the current window.
- If both frequency arrays are the same, the window is a permutation of s1, so we return true.
- If no window matches, we return false.

Time Complexity: O(n * 26), where n is the length of s2.
Space Complexity: O(26) = O(1).
*/
#include <string>
using namespace std;
class Solution {
public:
    bool sameFreq(int freq[], int window[]){
        for(int i =0; i<26; i++){
            if(freq[i] != window[i]){
                return false;
            }
                
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0} ;
        
        for(int i =0;i<s1.length(); i++){
            freq[s1[i]- 'a']++;
        }
        int windowSize = s1.length();
        for(int i = 0; i<s2.length(); i++){
            int windowIdx = 0, idx =i; 
            int window[26]= {0};
            while(windowIdx <= windowSize && idx <s2.length()){
                window[s2[idx]- 'a']++;
                windowIdx++;
                idx++;
            }
            if(sameFreq( freq, window)){
                return true;
            }
            
        }
        return false;
    }
};