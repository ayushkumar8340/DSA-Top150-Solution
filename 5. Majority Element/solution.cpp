class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count = 0;
        int cand = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(count == 0)
            {
                cand = nums[i];
                count +=1;
            }

            else if(cand == nums[i])
            {
                count +=1;
            }

            else
            {
                count -=1;
            }
        }

        int check = 0;
        for(int i = 0;i < nums.size(); i++)
        {
            if(nums[i] == cand)
            {
                check+=1;
            }
        }

        return (check > (nums.size()/2.0)) ? cand : -1;
    }
};