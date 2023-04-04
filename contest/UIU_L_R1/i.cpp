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
  while (t--) {
    int r, a;
    cin >> r >> a;
    if (180 % a == 0) {
      YES;
    } else {
      NO;
    }
  }
}