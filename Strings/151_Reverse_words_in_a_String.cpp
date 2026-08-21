/*
Problem: 151. Reverse Words in a String
Link: https://leetcode.com/problems/reverse-words-in-a-string/

Approach:
- We first reverse the entire string.
- This puts the words in reverse order, but also reverses the characters
  inside each word.
- We traverse the reversed string and extract each word.
- For every word, we reverse it again to restore its original order.
- We add each valid word to the answer string.
- Empty words caused by extra spaces are ignored.
- Finally, we remove the extra space added at the beginning of the answer
  using substr(1).

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include <string>
#include <algorithm>

using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        
        string ans, word;
        reverse(s.begin(), s.end());

        for(int i = 0; i<s.length(); i++){
            word = "";
            while(i < s.length() && s[i] != ' '){
                word += s[i];
                i++;   
            }
            reverse(word.begin(), word.end());
            if(word.length()>0){
                ans +=" "+word;
            }
                
        }
        return ans.substr(1);
    }
};