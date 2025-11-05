class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int total = 0;
        for(int i =0 ;i < prices.size(); i++)
        {
            if(i+1 < prices.size() && prices[i] < prices[i+1])
            {
                total= total + (prices[i+1] - prices[i]);
            }
        }   

        return total; 
    }
};