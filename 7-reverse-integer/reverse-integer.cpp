class Solution {
public:
    int reverse(int x) {
        long long rem=0,rev=0;
        while(x)
        {
            rem=x%10;
            rev=rev*10+rem;
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0;
            }
            x=x/10;
        }
        return rev;
    }
};