class Solution {
public:
    int maxPower(string s) {
        int max=0,c=1;
        if(s.size()==1)
        {
            return 1;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
            }
            else
            {
                c=1;
            }
            if(c>max)
            {
                max=c;
            }
        }
        return max;
    }
};