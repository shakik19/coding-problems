#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  int count = n * 2;
  for (int j = 1; j <= n; j++) {
    for (int i = n - j; i > 0; i--) {
      cout << count << " ";
      count -= 2;
    }
    count = j * n;
    cout << endl;
  }
}