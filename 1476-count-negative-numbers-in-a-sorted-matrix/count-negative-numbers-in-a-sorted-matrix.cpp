class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.at(0).size();j++)
            {
                if(grid[i][j]<0)
                {
                    c++;
                }
            }
        }
        return c;
    }
};