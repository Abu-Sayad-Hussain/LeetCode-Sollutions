class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0, r=1;
        int maxProfit = 0;
        while(r <= prices.size() -1){
            if(prices[r] - prices[l] > 0){
                maxProfit = max(maxProfit, prices[r] - prices[l]);
            }else{
                l = r;
            }
            r++;
            
        }
        return maxProfit;
    }
};