class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while(l < r) {
            while(l < r && !std::isalnum(s[l])) l++;
            while(r > l && !std::isalnum(s[r])) r--;
            if (l == r) {
                return true;
            }
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
