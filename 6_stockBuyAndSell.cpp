class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, minDay = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            if(minDay > prices[i]){
                minDay = prices[i];
            }
            maxProfit = max(maxProfit, prices[i]-minDay);
        }
        return maxProfit;
    }
};
