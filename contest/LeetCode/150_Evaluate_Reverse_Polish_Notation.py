class Solution:
  def evalRPN(self, tokens: [str]) -> int:
    stack = []
    op = ["+", "-", "*", "/"]

    for i in tokens:
      if i not in op:
        stack.append(i)
      else:
        s = int(stack.pop())
        f = int(stack.pop())
        res = 0
        if i == '+':
          res = f + s
        elif i == '-':
          res = f - s
        elif i == '*':
          res = f * s
        elif i == '/':
          res = f / s
        stack.append(str(int(res)))
    return int(stack.pop())

