class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2){
            return 0;
        }
        int profit = 0;
        int buy = prices[0];
        for (int i = 1; i < prices.size(); ++i){
            if (prices[i] > buy){
                profit = max(profit, prices[i] - buy);
            } else {
                buy = prices[i];
            }
        }
        return profit;
    }
};