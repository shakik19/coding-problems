import copy

class Solution:
    def rotate(self, nums: list[int], k: int) -> None:
        length = len(nums)
        k = (k % length)
        if k == 0: return nums
        base_ptr, base_value = 0, nums[0]
        to_ptr, to_value = k, nums[k]
        for _ in range(length):
            nums[base_ptr] = to_value
            nums[to_ptr] = base_value
            to_ptr = (to_ptr + k) % length
            base_value = to_value
            to_value = nums[to_ptr]
        return nums


# nums = [-1,-100,3,99]
lok =  [0, 1, 2, 3,   4, 5, 6]
nums = [[1,2,3,4,5,6,7,8], [1,2,3,4]]
# ans = [4, 5, 1, 2, 3]
# k = 2
# length = len(nums)
# k = (k % length) + 1
# base_ptr, base_value = 0, nums[0]
# to_ptr, to_value = k, nums[k]
# for _ in range(length - 1):
#     nums[base_ptr] = to_value
#     nums[to_ptr] = base_value
#     base_ptr = to_ptr
#     to_ptr = (base_ptr + k) % length
#     # base_value = to_value
#     to_value = nums[to_ptr]

# print(nums)

s = Solution()
for a in nums:
    for k in range(1, 10):
        temp = copy.deepcopy(a)
        print(f"{a} {s.rotate(temp, k)} {k}")