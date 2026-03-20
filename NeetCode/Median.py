class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n, m = len(nums1), len(nums2)
        if n > m:
            nums1, nums2 = nums2, nums1
            n, m = m, n
        l, r = 0, n - 1
        half = (n + m) // 2
        while True:
            mid = (l + r) // 2
            aleft = nums1[mid] if mid >=0 else float("-inf")
            aright = nums1[mid + 1] if mid + 1 < n else float("inf")
            bleft = nums2[half - mid - 2] if half - mid -2 >= 0 else float("-inf")
            bright = nums2[half - mid - 1] if half - mid - 1 < m else float("inf")
            if aleft <= bright and aright >= bleft:
                if (n + m) %2 :
                    return min(aright, bright)
                else :
                    return (max(aleft, bleft) + min(aright, bright)) / 2
            elif aleft > bright:
                r = mid - 1
            else :
                l = i + 1
        return -1
