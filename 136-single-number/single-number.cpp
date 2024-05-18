class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    int a=0;
    for(auto it:mp)
    {
        if(it.second==1)
        {
            a=it.first;
        }
    }
    return a;
    }
};