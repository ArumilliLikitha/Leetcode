class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=0,pro=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                pro=(nums[i]-1)*(nums[j]-1);
                if(pro>max)
                {
                    max=pro;
                }
                
                
            }
        }
        return max;
    }
};