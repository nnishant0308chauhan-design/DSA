class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int max_profit=INT_MIN;
        int profit;
        for(int i=0;i<prices.size();i++){
             min_price=min(min_price,prices[i]);
            profit=prices[i]-min_price;
            max_profit=max(max_profit,profit);
        }
        return max_profit;
    }
};