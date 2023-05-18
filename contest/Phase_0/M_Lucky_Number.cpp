//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int;
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << endl

bool extract(int num) {
  int n = 0;
  while (num > 0) {
    n = num % 10;
    if (n == 7 || n == 4) {
      num /= 10;
      continue;
    } else
      return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int a, b;
  cin >> a >> b;
  bool check = false;
  for (int i = a; i <= b; i++) {
    if (extract(i)) {
      cout << i << " ";
      check = true;
    }
  }
  if (!check)
    cout << "-1\n";
  else
    cout << "\n";
}