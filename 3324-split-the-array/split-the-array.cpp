class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int>sp;
        for(int i=0;i<nums.size();i++)
        {
            sp[nums[i]]++;
        }
        for(auto it:sp)
        {
            if(it.second>2)
            {
                return false;
            }
        }
        return true;
    }
};