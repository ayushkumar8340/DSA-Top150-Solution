class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int size = nums.size();
        int i = 0;
        int count=0;
        int last = nums.size() -1;

        while(i <= last)
        {
            if(nums[i] == val)
            {
                count +=1;
                while(nums[last] == val && last != i)
                {
                    size-=1;
                    count+=1;
                    last-= 1;
                }

                nums[i] = nums[last];
                last = last - 1;
                size = size-1;

            }

            i+=1;

        }   
        return (nums.size() - count);
    }
};