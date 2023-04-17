#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main() {
  int n, k;
  cin >> n >> k;
  char num[n];
  cin >> num;
  if (n == 1 && k == 1) {
    cout << "0" << endl;
    return 0;
  } else if (n == 1 && k == 0) {
    cout << num << endl;
    return 0;
  }
  if (k > 0) {
    if (num[0] != '1') {
      num[0] = '1';
      k--;
    }
    int i = 1;
    while (i < n && k > 0) {
      if (num[i] != '0') {
        num[i] = '0';
        k--;
      }
      i++;
    }
  }
  cout << num << endl;
}

//! PyPy 3 sol:
/*
n, k = map(int, input().split())
num = input().strip()

if n == 1 and k == 1:
    print("0")
    exit()
elif n == 1 and k == 0:
    print(num)
    exit()

num_list = list(num)
if k > 0:
    if num_list[0] != '1':
        num_list[0] = '1'
        k -= 1
    i = 1
    while i < n and k > 0:
        if num_list[i] != '0':
            num_list[i] = '0'
            k -= 1
        i += 1
print("".join(num_list))
*/