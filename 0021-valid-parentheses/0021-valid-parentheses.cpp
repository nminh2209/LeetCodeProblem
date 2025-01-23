class Solution {
public:
    bool isValid(string s) {
        unordered_map < char , char > bracketmap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
            
        stack<char> stk;
        for (char ch : s ) {
            if (bracketmap.count(ch)){
            if (!stk.empty() && stk.top() == bracketmap[ch]){
            stk.pop();
        }
            else {
            return false;
        }
            } else {
                stk.push(ch);
            }
        }
                return stk.empty();
        };


        };