class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,s=0,r=0;
        while(n>0)
        {
            r=n%10;
            pro=pro*r;
            s=s+r;
            n=n/10;
        }
        return pro-s;
    }
};