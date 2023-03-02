#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  /*start*/
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i = i + 2) {
      if (i == n and i % 2 == 1) {
        sum += i;
        cout << i;
      } else {
        sum += i * (i + 1);
        cout << i << " X " << (i + 1);
        if (i != n - 1) cout << " + ";
      }
    }
    cout << " = " << sum << endl;
  }
}