class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        int digit=0,r=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i])
            {
                r=nums[i]%10;
                digit=digit+r;
                nums[i]=nums[i]/10;
            }
        }
        return abs(sum-digit);
    }
};