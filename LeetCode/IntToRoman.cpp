class Solution {
public:
    string intToRoman(int num) {
        vector<int> numbers = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> roman = {"M", "CM", "D","CD","C","XC","L","XL","X","IX","V", "IV", "I"};
        std::ostringstream os;
        int i = 0;
        while (num > 0) {
            if(num >= numbers[i]){
                int cat = num / numbers[i];
                num -= cat * numbers[i];
                for(int j = 0; j < cat; ++j) {
                    os << roman[i];
                }
            }
            i++;
        }
        return os.str();
    }
};
