/*
Problem: 443. String Compression
Link: https://leetcode.com/problems/string-compression/

Approach:
- Use two pointers: `i` to traverse the array and `idx` to write
  the compressed result.
- For each group of consecutive characters, store the character and
  count how many times it appears.
- If the character appears only once, store only the character.
- If it appears more than once, convert the count into a string using
  `to_string()` and store each digit in the array.
- After processing all groups, resize the array to `idx` because only
  the first `idx` positions contain the compressed result.
- Return the new length of the compressed array.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int idx =0;
        for(int i = 0 ; i < chars.size(); i++){
            char ch = chars[i];
            int count = 0;
            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }
            
            if(count == 1){
                chars[idx++] = ch;
            }else{
                chars[idx++] = ch;
                string str = to_string(count);
                for(char dig : str){
                    chars[idx++] = dig;
                }
            }
            i--;
        }
        chars.resize(idx);
        
        return chars.size();
    }
};