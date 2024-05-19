class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string r;
        for(int i=0;i<words.size();i++)
        {
            string res=words[i];
            reverse(res.begin(),res.end());
            if(words[i]==res)
            {
                r=res;
                break;
            }
        }
        return r;
    }
};