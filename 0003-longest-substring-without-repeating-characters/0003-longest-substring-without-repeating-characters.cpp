class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        unordered_map <char, int> charIndex;
        int start = 0;

        for (int end = 0; end < s.length();end++){
            char currentChar = s[end];

            if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {

                start = charIndex[currentChar] + 1;
        }

        charIndex[currentChar] = end;

        maxLength = max(maxLength, end - start + 1);
        }
        return maxLength;
    }
};