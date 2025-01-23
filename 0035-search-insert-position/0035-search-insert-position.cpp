class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty()) return false;

        for (int i = 0; i < nums.size();i++){
            if (nums[i] >= target){
                return i;
            }
        }
        return nums.size();
    }
};