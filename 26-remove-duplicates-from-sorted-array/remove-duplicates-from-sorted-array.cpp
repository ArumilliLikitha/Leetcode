class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[i]!=nums[j])
        {
            i++;
        }
        nums[i]=nums[j];
    }
    if(nums.size()==0)
    {
        return 0;
    }
    else
    {
        return i+1;
    }
    }
};