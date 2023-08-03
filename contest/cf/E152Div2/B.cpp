//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  priority_queue<pair<int, int>> pq;
  priority_queue<pair<int, int>> pqs;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    pq.push(make_pair(v[i], i + 1));
  }
  while (!pq.empty()) {
    int x = pq.top().first;
    int index = pq.top().second;
    pq.pop();
    if (x > 0) {
      pq.push(make_pair(x - k, index));
    } else {
      cout << index << " ";
    }
  }
  cout << "\n";
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
