#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, t = 0, sum;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    if (arr[0] != 1) {
      cout << "NO" << endl;
    } else {
      sum = arr[0];
      for (int i = 0; i < n; i++) {
        if (arr[i] > sum) {
          t = 1;
          cout << "NO" << endl;
          break;
        }
        sum += arr[i];
      }
      if (!t) cout << "YES" << endl;
    }
  }
}