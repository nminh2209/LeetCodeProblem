class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b) {
            return -1;
        }
        return max((int)a.length(), (int)b.length());
    }
};