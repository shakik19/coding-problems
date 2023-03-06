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
    int n;
    cin >> n;
    if (n == 2) {
      cout << "YES" << endl;
      break;
    }
    string sub[n];
    string rev1, rev2;
    int cnt = 0;
    for (int i = 0; i < 2 * n - 2; i++) {
      cin >> sub[i];
      if (sub[i].size() == n - 1) {
        if (cnt == 0) {
          rev1 = sub[i];
          cnt++;
        } else {
          rev2 = sub[i];
          break;
        }
      }
    }
    reverse(rev2.begin(), rev2.end());
    if (rev1 == rev2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}