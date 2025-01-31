#include <unordered_map>
#include <string>

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int maxLen = 0;
        bool hasOdd = false;
        for (auto& [ch, count] : freq) {
            if (count % 2 == 0) {
                maxLen += count; // Use full even counts
            } else {
                maxLen += count - 1; // Use the largest even part
                hasOdd = true; // Track if an odd count exists
            }
        }

        return maxLen + (hasOdd ? 1 : 0); // Add one odd character in the middle if possible
    }
};
