class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = 0;
        int mini = prices[0], maxi = prices[0];
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > maxi) {
                maxi = prices[i];
                s = max(maxi - mini, s);
            }
            else if (prices[i] < mini) {
                mini = prices[i];
                maxi = mini;
            }
        }
        return s;
    }
};
