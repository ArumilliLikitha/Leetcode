class Solution {
public:
    int tribonacci(int n) {
        int t1=0,t2=1,t3=1;
        long long int t=0;
        if(n<=1)
        {
            return n;
        }
        else if(n==2)
        {
            return 1;
        }
        for(int i=3;i<=n;i++)
        {
            t=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=t;
        }
        return t;

    }
};