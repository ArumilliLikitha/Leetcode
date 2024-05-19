class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,r=0,c=0,pro=1;
        if(k<=1)
        {
            return 0;
        }
        while(r<nums.size())
        {
            pro*=nums[r];
            while(pro>=k)
            {
                pro/=nums[l];
                l++;
            }
            c+=(r-l)+1;
            r++;
        }
        return c;


        
    }
};