#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  // Start from here
  int t;
  cin >> t;
  while (t--) {
    int n, maxCount = 0, minCount = 0;
    cin >> n;
    vector<int> arr(n);
    int mx = 0, mn = INT_MAX;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      mx = max(mx, arr[i]);
      mn = min(mn, arr[i]);
    }
    for (int i = 0; i < n; i++) {
      if (mx == arr[i]) maxCount++;
      if (mn == arr[i]) minCount++;
    }
    ll ans;
    if (mx == mn) {
      ans = (minCount * (minCount - 1));
    } else {
      ans = 2ll * (maxCount * minCount);
    }
    cout << ans << endl;
  }
}