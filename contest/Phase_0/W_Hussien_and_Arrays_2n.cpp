#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  priority_queue<pair<int, int>> v;
  vector<int> vv(n);
  for (int i = 0; i < n; i++) {
    cin >> vv[i];
    v.push({vv[i], i});
  }

  int ans = -1;

  for (int i = 0; i < n; i++) {
    while (v.size() > 0 && v.top().first >= vv[i]) {
      ans = max(ans, v.top().second - i);
      v.pop();
    }
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

0 1 2 3 4 5
6 3 2 7 1 5

7 6 5 3 2 1
3 0 5 1 2 4


7 6 3
6 6 0
5 3 5
3 3 1
2 2 2
1 1 4

*/