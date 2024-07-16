class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum=sum+nums[j];
                if(sum==k)
                {
                    cnt+=1;
                }
            }
        }
        return cnt;
    }
};