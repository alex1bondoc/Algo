class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanToInt= {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int res = 0;
        for (int i = 0; i <= s.length();++i){
            if (i < s.length() - 1 && romanToInt[s[i]] < romanToInt[s[i + 1]]){
                res -= romanToInt[s[i]];
            }
            else res += romanToInt[s[i]];
        }
        return res;
    }
};
