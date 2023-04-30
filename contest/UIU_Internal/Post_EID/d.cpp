//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << endl

int main() {
  bool f = false;
  int t;
  cin >> t;
  while (t--) {
    int first = 1, secnd = 1, n, count = 0;
    cin >> n;
    if (n > 0) cout << "0 #EID MUBARAK#";
    for (int i = 1; i < n; i++) {
      cout << first;
      int temp = first;
      first = secnd;
      secnd = secnd + temp;
      count++;
      if (count == 3) {
        cout << "$";
        count = 0;
      } else {
        cout << "@";
      }
    }
    cout << "\n";
  }
}