class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n=nums.size();
       int res=0;
       for(int i=nums[n-1];i>=1;i--)
       {
           if(nums[0]%i==0 && nums[n-1]%i==0)
           {
               res=i;
               break;
           }
       } 
       return res;
    }
};