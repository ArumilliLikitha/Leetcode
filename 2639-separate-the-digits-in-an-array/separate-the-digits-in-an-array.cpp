class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string s;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            s=to_string(nums[i]);
            for(char c:s)
            {
                res.push_back(c-'0');
            }
        }
        return res;
    }
};