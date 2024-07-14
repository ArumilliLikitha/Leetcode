class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int c=0,sub=0,add=0;
        for(int i=0;i<nums.size();i++)
        {
            sub=0,add=0;
            if(nums[i]%3!=0)
            {
                sub=nums[i]-1;
                add=nums[i]+1;
                if(add%3==0 || sub%3==0)
                {
                    c++;
                }
            }
        }
        return c;
    }
};