class Solution {
public:
    int countDigits(int num) {
        int c=0,r=0;
        int x=num;
        while(num>0)
        {
            r=num%10;
            if(x%r==0)
            {
                c++;
            }
            num=num/10;
        }
        return c;
    }
};