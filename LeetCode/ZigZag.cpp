class Solution {
public:
    string convert(string s, int numRows) {
        int type = 0;
        std::ostringstream ss;
        int number = numRows + (numRows - 2);
        int step = number;
        if (numRows == 1)
            number = 1;
        for (int i = 0; i < numRows; ++i) {
            int startRow = i;
            step = number - i * 2;
            if (step == 0) {
                step = number;
            }
            while(startRow < s.length()) {
                
                ss << s[startRow];
                startRow += step;
                step = number - step;
                if(step == 0) {
                    step = number - step;
                }
            }
            step -= 2;
        }
        return ss.str();
    }
};
