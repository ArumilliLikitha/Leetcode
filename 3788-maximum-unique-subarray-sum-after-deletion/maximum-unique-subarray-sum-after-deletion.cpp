class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int sum=0;
        int maxi=INT_MIN;
        vector<int>vec(st.begin(),st.end());
        for(int i=0;i<vec.size();i++)
        {
            sum=0;
            for(int j=i;j<vec.size();j++)
            {
                sum=sum+vec[j];
            }
            maxi=max(sum,maxi);
        }
    return maxi;
    }
};