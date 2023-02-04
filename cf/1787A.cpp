#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    clock_t start, finish;
    start = clock();
    int n;
    cin >> n;
    int a1 = 0, a2 = 0;
    bool chk = false;
    for (int i = 1; i <= n; i++) {
      for (int j = (n / 4); j >= 1; j--) {
        long long ans = (int)(i * j * (pow(i, (j - 1)) + pow(j, (i - 1))));
        if (ans == n) {
          cout << i << " " << j << endl;
          chk = true;
        }
      }
      if (chk) {
        cout << i << endl;
        break;
      }
    }
    if (!chk) {
      cout << -1 << endl;
    }
    finish = clock();
    cout << (finish - start) << "ms" << endl;
  }
}