#   Source: https://leetcode.com/problems/longest-consecutive-sequence/

class Solution:
    def longestConsecutive(self, arr: List[int]) -> int:
        if not arr:
            return 0
        arr_set = set(arr)
        ans = 0
        for i in arr_set:
            if (i - 1) not in arr_set:
                count = 0
                while (i + count) in arr_set:
                    count += 1
                    ans = max(ans, count)
        return max(ans, count)