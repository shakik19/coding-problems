//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1800/C
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t ll;
typedef uint64_t llu;

void solve() {
  // From here
  llu n, x, pw = 0;
  cin >> n;
  vector<llu> v;
  priority_queue<llu> pq;
  for (llu i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  for (llu i = 0; i < n; i++) {
    if (v[i] != 0) {
      pq.push(v[i]);
    } else if (v[i] == 0) {
      if (!pq.empty()) {
        pw += pq.top();
        pq.pop();
      }
    }
  }
  cout << pw << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
