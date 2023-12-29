class Solution:
  def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
    stack, ans = [], []

    for i in temperatures:
      if len(stack) == 0:
        stack.append(i)
