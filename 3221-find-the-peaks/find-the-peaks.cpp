class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>v;
        for(int i=1;i<=mountain.size()-2;i++)
        {
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1])
            {
                v.push_back(i);
            }
        }
        return v;
    }
};