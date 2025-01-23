class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
    
        int k = 0;
        for (int i = 0 ; i < nums.size(); ++i){
            if (val != nums[i]){
                nums[k] = nums[i];
                ++k;
            }
        }
        return k;
    }
};