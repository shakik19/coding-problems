# Source: https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s == "":
            return 0
        arr = list(s)
        mxl = len(set(arr))
        print(arr)
        for i in reversed(range(2, mxl + 1)):
            ptr = 0
            while (ptr + i - 1) != len(arr):
                if len(set(arr[ptr:(ptr + i)])) == i:
                    return i
                else:
                    ptr += 1
        return 1
