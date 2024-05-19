class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int s=0;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                s=s+it.first;
            }
        }
        return s;
    }
};