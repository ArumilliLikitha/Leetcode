class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size()/4;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int ans=0;
        for(auto it:mp)
        {
            if(it.second>n)
            {
                ans=it.first;
            }
        }
        return ans;
    }
};