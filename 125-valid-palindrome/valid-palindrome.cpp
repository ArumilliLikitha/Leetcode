class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c:s)
        {
            if(isalnum(c))
            {
                str+=tolower(c);
            }
        }
        int n=str.size();
        for(int i=0;i<str.size()/2;i++)
        {
            if(str[i]!=str[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
};