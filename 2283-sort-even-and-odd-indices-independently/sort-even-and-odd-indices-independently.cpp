class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i=i+1)
        {
            if(i%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        vector<int>res(nums.size());
        for(int i=0;i<even.size();i++)
        {
            res[2*i]=even[i];
        }
        for(int i=0;i<odd.size();i++)
        {
            res[2*i+1]=odd[i];
        }
        return res;

    }
};