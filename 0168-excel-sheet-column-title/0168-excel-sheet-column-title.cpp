class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = ""; 

        while (columnNumber > 0) {
            columnNumber -= 1; 
            char currentChar = 'A' + (columnNumber % 26); 
            result = currentChar + result; 
            columnNumber /= 26; 
        }
        return result;
    }
};
