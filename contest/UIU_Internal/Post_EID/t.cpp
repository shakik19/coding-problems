//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

int main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int a, b;
    cin >> a >> b;
    cout << "Test Case " << i << " : " << ((2 * a) + b) << endl;
  }
}
