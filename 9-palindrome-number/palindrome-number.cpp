class Solution {
public:
    bool isPalindrome(int x) {
        long long r=0,rev=0;
        int temp=x;
        while(x)
        {
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        if(temp==rev && temp>=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};