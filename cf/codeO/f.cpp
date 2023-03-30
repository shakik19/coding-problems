#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  ll t;
  cin >> t;
  while (t--) {
    bool check = true;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = 1; i <= 9; i++) {
      /* code */
      if (((a + i) % b) == (c + i) % d) {
        cout << i << endl;
        check = false;
        break;
      }
    }
    if (check) {
      cout << "0" << endl;
    }
  }
}