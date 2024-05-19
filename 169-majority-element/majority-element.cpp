class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int  m=nums.size()/2;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int res=0;
        for(auto it:mp)
        {
            if(it.second>m)
            {
                res=it.first;
            }
        }
        return res;
    }
};