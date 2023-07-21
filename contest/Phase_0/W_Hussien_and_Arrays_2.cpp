#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back({x, i});
  }
  sort(v.begin(), v.end());

  int ans = -1;

  while (v.size() > 0) {
    int i = v.size() - 1;
    while (i >= 0) {
      ans = max(ans, v[v.size() - 1].second - v[i].second);
      // cout << v[v.size() - 1].second << " " << v[i].second << endl;
      // cout << i << endl;
      i--;
    }
    v.pop_back();
  }

  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  solve();
}

/*
6
6 3 2 7 1 5

7 3
6 0
5 5
3 1
2 2
1 4

*/