class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int r=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int d=0;
            while(num>0)
            {
                num=num/10;
                d++;
            }
            if(d%2==0)
            {
                c++;
            }
        }
        return c;
    }
};