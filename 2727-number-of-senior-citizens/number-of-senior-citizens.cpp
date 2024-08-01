class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cntr=0;
        for(string&detail:details)
        {
        string agestr=detail.substr(11,2);
        int age=stoi(agestr);
        if(age>60)
        {
            cntr++;
        }
        }
        return cntr;
    }
};