class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<=i;j++)
            {
                if(s.size()!=t.size())
                {
                    return false;
                }
                if(s[i]!=t[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};