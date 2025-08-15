class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit =0, mini=prices[0];
        for(int i=1;i<n;i++){
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(prices[i],mini);
        }
        return profit;
        
    }
};
