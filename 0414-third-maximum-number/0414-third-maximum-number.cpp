class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> unique_nums;
        for (int num : nums) {
            unique_nums.insert(num);
            if (unique_nums.size() > 3) {
                unique_nums.erase(unique_nums.begin());
            }
        }
        return unique_nums.size() == 3 ? *unique_nums.begin() : *unique_nums.rbegin();
    }
};
