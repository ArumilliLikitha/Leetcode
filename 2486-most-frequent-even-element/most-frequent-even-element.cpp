class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                mp[nums[i]]++;
            }
        }
        int max=0,maxfreq=-1;
        for(auto it:mp)
        {
            if(it.second>max)
            {
                max=it.second;
                maxfreq=it.first;
            }
        }
        return maxfreq;
    }
};