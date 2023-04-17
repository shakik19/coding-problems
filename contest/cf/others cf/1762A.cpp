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
    int minE = imx, minO = imx, sum = 0;
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      sum += num;
      if (num % 2 == 0) {
        if (num < minE) {
          minE = num;
        }
      } else {
        if (num < minO) {
          minO = num;
        }
      }
    }
    int op = 0;
    if (minE == imx) {
      minE = 0;
    }
    if (minO == imx) {
      minO = 0;
    }
    if (sum % 2 == 1) {
      // int diff = abs(minE - minO);
      // if (diff <= 3 or minE == 0) {
      //   while (minO != 0) {
      //     minO /= 2;
      //     op++;
      //   }
      // } else
      if (minE < minO && minE != 0) {
        while (minE != 1) {
          minE /= 2;
          op++;
        }
      } else {
        while ((minO % 2) != 0) {
          minO /= 2;
          op++;
        }
      }
      cout << op << endl;
    } else {
      cout << 0 << endl;
    }
  }
}