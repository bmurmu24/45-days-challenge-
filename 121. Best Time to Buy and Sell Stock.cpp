class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Mprofit = 0;
        int mprofit = INT_MAX;

        for(int price : prices){
            mprofit = std::min(mprofit,price);
            Mprofit = std::max(Mprofit, price - mprofit);
        }

        return Mprofit;
        
    }
};