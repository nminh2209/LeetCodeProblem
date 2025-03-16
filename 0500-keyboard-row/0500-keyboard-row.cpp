class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        unordered_map<char, int> rowMap;

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for (char c : row1) rowMap[c] = rowMap[toupper(c)] = 1;
        for (char c : row2) rowMap[c] = rowMap[toupper(c)] = 2;
        for (char c : row3) rowMap[c] = rowMap[toupper(c)] = 3;

       
        for (string word : words) {
            int row = rowMap[word[0]]; 
            bool isValid = true;

            for (char c : word) {
                if (rowMap[c] != row) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) result.push_back(word);
        }

        return result;
    }
};
