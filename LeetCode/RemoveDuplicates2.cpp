class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <  2)
            return nums.size();
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (cnt == 0 || cnt == 1 || nums[cnt - 2] != nums[i]) {
                nums[cnt++] = nums[i];
            }
        }
        return cnt;
    }
};
```
