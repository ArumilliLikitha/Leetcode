class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        map<char,char>mp;
        map<char,bool>res;
        for(int i=0;i<s.size();i++)
        {
            if(mp.count(s[i]))
            {
                if(mp[s[i]]!=t[i])
                {
                    return false;
                }
    
            }
            else
                {
                    if(res.count(t[i]))
                    {
                        return false;
                    }
                        mp[s[i]]=t[i];
                        res[t[i]]=true;
                    
                }
        }
         return true;
    }
};