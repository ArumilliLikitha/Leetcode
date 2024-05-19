class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
         map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int n=nums.size()/2;
        int res=0;
        for(auto it:mp)
        {
            if(it.second==n)
            {
                res=it.first;
                break;
            }
        }
        return res;
    }
};