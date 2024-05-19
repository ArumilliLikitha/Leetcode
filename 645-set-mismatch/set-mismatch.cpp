class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
      vector<int>v;
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
          mp[nums[i]]++;
      }
      for(auto it:mp)
      {
          if(it.second>=2)
          {
              v.push_back(it.first);
          }
      }
       set<int>st;
       for(int it=0;it<n;it++)
       {
           st.insert(nums[it]);
       }
       long t=(n*(n+1))/2;
       int s=0;
       for(auto it:st)
       {
           s=s+it;
       }
       int res=t-s;
       v.push_back(res);
       return v;
    }
};