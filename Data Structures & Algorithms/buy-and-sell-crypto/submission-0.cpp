class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0 ;
        int j = 1 ;
        int res = INT_MIN ;

        while(j < prices.size()){
            
            if( (prices[j] - prices[i])  <  0 ){
                i++ ;
                continue ;
            }

             if( (prices[j] - prices[i])  >  0 ){
                int temp = prices[j] - prices[i] ;
                res = max(res,temp) ;
             }
            j++;
        }

        if(res < 0) return 0 ;
        else return res ;
    }
};
