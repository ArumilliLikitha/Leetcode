class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {

                res.push_back(v1[i]);
                res.push_back(v2[j]);
                i++;
            }
        }
        return res;
    }
};