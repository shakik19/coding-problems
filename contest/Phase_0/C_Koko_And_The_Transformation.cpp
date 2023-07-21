//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n, m;
  cin >> n >> m;
  int sumn = 0, summ = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sumn += x;
  }
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    summ += x;
  }
  if (sumn == summ)
    cout << "Yes\n";
  else
    cout << "No\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  solve();
}
