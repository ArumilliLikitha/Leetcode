class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a1;
        vector<int>a2;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            if(a1[a1.size()-1]>a2[a2.size()-1])
            {
                a1.push_back(nums[i]);
            }
            else
            {
                a2.push_back(nums[i]);
            }
        }
        vector<int>sol;
        for(int i:a1)
        {
            sol.push_back(i);
        }
         for(int i:a2)
        {
            sol.push_back(i);
        }
        return sol;
    }
};