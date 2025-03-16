class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;  // Store next greater elements for nums2
        stack<int> s;  // Monotonic stack
        vector<int> result;


        for (int num : nums2) {
            while (!s.empty() && s.top() < num) {
                nextGreater[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }

    
        while (!s.empty()) {
            nextGreater[s.top()] = -1;
            s.pop();
        }

        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }

        return result;
    }
};
