//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/1851/problem/C
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  unordered_map<int, int> map;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    map[arr[i]]++;
  }
  if (arr[0] == arr[n - 1] && map[arr[0]] >= k) {
    cout << "YES\n";
    return;
  }
  if (map[arr[0]] < k || map[arr[n - 1]] < k) {
    cout << "NO\n";
    return;
  }
  int left = 0, right = 0;
  int i, j;
  for (i = 0; i < n && left < k; i++) {
    left += arr[i] == arr[0];
  }
  for (j = n - 1; j >= 0 && right < k; j--) {
    right += arr[j] == arr[n - 1];
  }
  if (i - 1 < j + 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
