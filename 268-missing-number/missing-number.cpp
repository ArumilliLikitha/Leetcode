class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int xnums=0;
       for(int i=0;i<nums.size();i++)
       {
           xnums^=nums[i];
       } 
       for(int i=1;i<=n;i++)
       {
           xnums^=i;
       }
       return xnums;
    }
};