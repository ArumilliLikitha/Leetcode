class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int>res;
        int largest=-1;
        for(int i:nums)
        {
            if(res.count(-i))
            {
                largest=max(largest,abs(i));
            }
            else
            {
                res.insert(i);
            }
        }
        return largest;
    }
};