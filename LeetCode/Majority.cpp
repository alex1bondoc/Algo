class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int appear = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == candidate){
                appear += 1;
            }
            else {
                appear -= 1;
                if (appear < 0) {
                    candidate = nums[i];
                    appear = 1;
                }
            }
        }
        return candidate;
    }
};
