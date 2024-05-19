class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int c=0;
        for(auto it:mp)
        {
            c=c+(it.second/3);
            if(it.second%3){
                c++;
            }
            if(it.second==1)
        {
            return -1;
        }
        }

        return c;
    }
};