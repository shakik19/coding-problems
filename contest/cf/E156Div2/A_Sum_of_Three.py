# Bismillah

# Source:https://codeforces.com/contest/1886/problem/A

import os
import sys
from io import BytesIO, IOBase

def solve():
	n = ri()
	if n < 7: 
		print("NO")
	elif n % 3 == 0 and n < 10:
		print("NO")
	elif n % 3 != 0:
		print(f'YES\n1 2 {n-3}')
	else:
		print(f'YES\n1 4 {n-5}') 


def main():
	for tc in range(1, 1 + int(input())):
		solve()


# region fastio

BUFSIZE = 8192

class FastIO(IOBase):
	newlines = 0

	def __init__(self, file):
		self._file = file
		self._fd = file.fileno()
		self.buffer = BytesIO()
		self.writable = "x" in file.mode or "r" not in file.mode
		self.write = self.buffer.write if self.writable else None

	def read(self):
		while True:
			b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
			if not b:
				break
			ptr = self.buffer.tell()
			self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
		self.newlines = 0
		return self.buffer.read()

	def readline(self):
		while self.newlines == 0:
			b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
			self.newlines = b.count(b"\n") + (not b)
			ptr = self.buffer.tell()
			self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
		self.newlines -= 1
		return self.buffer.readline()

	def flush(self):
		if self.writable:
			os.write(self._fd, self.buffer.getvalue())
			self.buffer.truncate(0), self.buffer.seek(0)


class IOWrapper(IOBase):
	def __init__(self, file):
		self.buffer = FastIO(file)
		self.flush = self.buffer.flush
		self.writable = self.buffer.writable
		self.write = lambda s: self.buffer.write(s.encode("ascii"))
		self.read = lambda: self.buffer.read().decode("ascii")
		self.readline = lambda: self.buffer.readline().decode("ascii")


sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
input = lambda: sys.stdin.readline().rstrip("\r\n")
rri = lambda: map(int, input().split())
ri = lambda: int(input())

# endregion

if __name__ == "__main__":
	main()