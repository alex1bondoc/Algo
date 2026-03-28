class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res{0}, s{0};
        std::unordered_map<int, int> map{{0, 1}};
        for (const int& num: nums) {
            s += num;
            int dif{s - k};
            res += map[dif];
            map[s] += 1;
        }
        return res;
    }
};
class Solution {
    public int subarraySum(int[] nums, int k) {
        int s = 0;
        int res = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(0, 1);
        for (int num : nums) {
            s += num;
            int dif = s - k;
            res += map.getOrDefault(dif, 0);
            map.put(s, map.getOrDefault(s, 0) + 1);
        }
        return res;
    }
}
class Soution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        s = 0
        res = 0
        map = {}
        map[0] = 1
        for num in nums:
            s += num
            dif = s - k
            res += map.get(dif, 0)
            map[s] = map.get(s, 0) + 1
        reutrn res
