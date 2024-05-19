class Solution {
public:
    int minSteps(string s, string t) {
         map<char, int> mp1;
        for (int i = 0; i < s.size(); i++) {
            mp1[s[i]]++;
        }
        map<char, int> mp2;
        for (int i = 0; i < t.size(); i++) {
            mp2[t[i]]++; 
        }
        int c = 0;
        for (auto it : mp1) {
            char ch = it.first;
            if (mp2.find(ch) == mp2.end()) {
                
                c += it.second;
            } else {
                
                 c += max(0, it.second - mp2[ch]);
            }
        }
        return c;
    }
};