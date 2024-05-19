class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<int>v;
        for(auto it:mp)
        {
            if(it.first==it.second)
            {
                v.push_back(it.first);
            }
        }
        if(v.size()==1)
        {
            return v[0];
        }
        int max=0;
        if(v.size()>1)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]>max)
                {
                    max=v[i];
                }
            }
            return max;
        }
        return -1;
    }
};