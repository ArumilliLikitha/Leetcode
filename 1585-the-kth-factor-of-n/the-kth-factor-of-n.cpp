class Solution {
public:
    int kthFactor(int n, int k) {
        int res=0,c=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
                res=i;
                if(c==k)
                {
                    return res;
                }
            }
        }
        return -1;
    }
};