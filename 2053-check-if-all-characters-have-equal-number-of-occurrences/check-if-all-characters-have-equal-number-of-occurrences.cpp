class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>v;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                return false;
            }
        }
        return true;

    }
};