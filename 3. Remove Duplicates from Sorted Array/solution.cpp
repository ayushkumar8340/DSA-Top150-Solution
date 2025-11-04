class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       int i = 0;
       int j = i+1;


       while(j <= nums.size()-1)
       {
            if(nums[i] != nums[j] && (j-i) > 1)
            {
                nums[i+1] = nums[j];
                i+=1;
                j+=1;
            }

            else if(nums[i] == nums[j])
            {
                j+=1;
            }

            else
            {              
                i+=1;
                j+=1;
            }
       }
       return i+1;
    }
};