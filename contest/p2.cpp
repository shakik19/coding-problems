#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    int maxB = -2147483648;
    int maxG = -2147483648;
    cin >> n;
    long long b[n], g[n];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      if (b[i] > maxB) {
        maxB = b[i];
      }
    }
    for (int j = 0; j < n; j++) {
      cin >> g[j];
      if (g[j] > maxG) {
        maxG = g[j];
      }
    }
    cout << (maxB + maxG) << endl;
  }
}