
class Solution {
public:
    int characterReplacement(string s, int k) {
        // optimal solution
        int res = 0;
        int maximum = 0;
        std::unordered_map<char, int> count;
        int l = 0;
        for (int r = 0; r < s.size(); ++r) {
            count[s[r]] = count[s[r]] + 1;
            if (count[s[r]] > maximum) maximum = count[s[r]];
            while (r - l + 1 -  maximum > k) {
                count[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};
class Solution {
public:
    int characterReplacement(string s, int k) {
        // sliding window unoptimal
        int res = 0;
        std::unordered_set<char> charSet(s.begin(), s.end());

        for (char c : charSet) {
            int cnt = 0;
            int l = 0;
            for (int r = 0; r < s.size(); ++r) {
                if (s[r] == c) {
                    cnt ++;
                }
                while (r - l + 1 - cnt > k) {
                    if (s[l] == c) {
                        cnt --;
                    }
                    l ++;

                }
                res = max(res, r - l  +1);
            }
        }
        return res;
    }
};
class Solution {
public:
    int characterReplacement(string s, int k) {
        // brute Force solution
        int n = s.size();
        int res = 0;
        for (int i = 0;i < n; ++i) {
            std::unordered_map<char, int> chars;
            int maximum = 0;
            for (int j = i; j < n; ++j) {
                chars[s[j]] = chars[s[j]] + 1;
                if (chars[s[j]] > maximum){
                    maximum = chars[s[j]];
                }
                if (j - i + 1 - maximum <= k)
                    res = max(j - i + 1, res);
            }
        }
        return res;
    }
};
