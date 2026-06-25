class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0, sell=1, tprf=0, prf=0;
        while(sell<prices.size()){
            tprf=prices[sell]-prices[buy];
            prf= max(prf,tprf);
            if(prices[sell]<prices[buy])
                buy=sell;
            sell++;
        }
        return prf;
    }
};