class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int max=0;
        for(auto it:mp)
        {
            if(it.second>=max)
            {
                max=it.second;
            }
        }
        for(auto it:mp)
        {
            if(it.second==max)
            {
                s+=it.second;
            }
        }
        return s;
    }
};