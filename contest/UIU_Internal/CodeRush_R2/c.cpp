//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int

void solve() {
  int n;
  cin >> n;
  int count = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i * j >= n)
        break;
      else
        count++;
    }
  }
h:;
  cout << count << "\n";
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  solve();
}