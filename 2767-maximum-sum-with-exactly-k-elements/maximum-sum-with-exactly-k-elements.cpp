class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        int s=0;
        for(int i=0;i<k;i++)
        {
            s=s+max;
            max=max+1;
        }
        return s;
    }
};