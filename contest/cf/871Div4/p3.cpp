//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define ANS cout << ans << "\n"

void solve() {
  int n;
  set<int> both, left, right;
  int ans = imx;
  cin >> n;
  while (n--) {
    int time;
    string s;
    cin >> time >> s;
    if (s[0] == '1' && s[1] == '1') {
      both.insert(time);
    } else if (s[0] == '0' && s[1] == '1') {
      right.insert(time);
    } else if (s[0] == '1' && s[1] == '0') {
      left.insert(time);
    }
  }

  if (!both.empty()) {
    ans = min(ans, (int)*both.begin());
  }
  if (!right.empty() && !left.empty()) {
    ans = min(ans, (int)(*left.begin() + *right.begin()));
  }

  if (ans != imx) {
    cout << ans << "\n";
    return;
  } else {
    cout << "-1\n";
  }
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