class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int lowest = prices[0];
        int max_profit = 0;

        for(auto num : prices)
        {
            if(num < lowest)
            {
                lowest = num;
            }
            
            max_profit = max(max_profit,(num - lowest));
        }

        return max_profit;
    }
};