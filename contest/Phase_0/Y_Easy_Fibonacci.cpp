//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << endl

void solve(int first, int next, int n) {
  if (n == 0) {
    cout << "\n";
    return;

  } else {
    cout << first << " ";
    solve(next, first + next, --n);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int n;
  cin >> n;
  solve(0, 1, n);
}