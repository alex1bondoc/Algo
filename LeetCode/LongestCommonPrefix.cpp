class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            int l = 0;
            while(l < strs[0].length() && l <  strs[i].length()) {
                if (strs[0][l] != strs[i][l]) {
                    break;
                }
                l ++;
            }
            if (l < res.length()) {
                res = res.substr(0, l);
            }
            if (l == 0) 
                return "";
        }
        return res;
    }
};
