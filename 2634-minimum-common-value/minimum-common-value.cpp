class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        if(v.size()==0)
        {
            return -1;
        }
        return v[0];
    }
};