class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int totalProfit = 0;
        int n = prices.size();

        for (int i = 1; i < n; ++i) {
            // If the current price is higher than the previous day's price,
            // buy on the previous day and sell on the current day to make a profit.
            if (prices[i] > prices[i - 1]) {
                totalProfit += prices[i] - prices[i - 1];
            }
        }

        return totalProfit;
    }
};