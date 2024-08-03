class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       sort(target.begin(),target.end());
       sort(arr.begin(),arr.end());
       for(int i=0;i<target.size();i++)
       {
        for(int j=i;j<arr.size();j++)
        {
            if(target[i]==arr[j])
            {
                i++;
            }
            else
            {
                return false;
                break;
            }
        }
       } 
       return true;
    }
};