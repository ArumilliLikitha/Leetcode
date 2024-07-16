class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        if(nums.size()==0) return 0;
        int longest=1;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int x,cnt;
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                cnt=1;
                x=it;
            while(st.find(x+1)!=st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
            }
        }
        return longest;
    }
};