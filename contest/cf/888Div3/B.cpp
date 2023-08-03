//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1851/problem/B
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) cin >> nums[i];
  vector<int> dupli(n);
  dupli = nums;
  sort(nums.begin(), nums.end());
  for (int i = 0; i < n; i++) {
    if (!(nums[i] & 1) && (dupli[i] & 1)) {
      cout << "NO\n";
      return;
    } else if ((nums[i] & 1) && !(dupli[i] & 1)) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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
