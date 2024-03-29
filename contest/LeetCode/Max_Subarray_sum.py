#    Source: https://leetcode.com/problems/maximum-subarray/
import sys
class Solution:
    def max_subarray_sum(self, nums: List[int]) -> int:
        mx = -(sys.maxsize - 1)
        sum = 0
        for i in range(len(nums)):
            sum += nums[i]
            if sum > mx: mx = sum
            if sum < 0: sum = 0
        return mx