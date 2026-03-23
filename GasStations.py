class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        n, total, sur = len(gas), 0, 0
        start = 0
        for i in range(n):
            total += gas[i] - cost[i]
            sur += gas[i] - cost[i]
            if sur < 0:
                sur = 0
                start = i + 1
        return start if total >= 0 else -1
