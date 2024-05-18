class Solution {
public:
    int lengthOfLastWord(string s) {
        int maxi=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                c++;
            }
            else
            {
                if(c!=0)
                {
                maxi=c;
                }
                c=0;
            }
        }
        if(c!=0)
        {
            maxi=c;
        }
        return maxi;
    }
};