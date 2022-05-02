class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val = INT_MAX;
        int profit = 0;
        for(int i=0;i<prices.size();i++){
            min_val=min(min_val,prices[i]);
            profit=max(profit,prices[i]-min_val);
        }
        return profit;
    }
};