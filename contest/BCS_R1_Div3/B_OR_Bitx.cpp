//! Bismillah
/*
https://codeforces.com/gym/104289/problem/B
*/
#include "bits/stdc++.h"
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    uint64_t arr[n] = {0}, sum = 0;
    if (n == 1) {
      cout << n << "\n";
      break;
    }

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    if (n == 3) {
      cout << (arr[0] | arr[1] | arr[2]) << "\n";
      break;
    }
    int i;
    if (n > 3 && n % 2 == 1) {
      sum += (arr[0] | arr[1] | arr[2]);
      i = 4;
    } else {
      i = 0;
    }
    for (; i < n; i += 2) {
      sum += arr[i] | arr[i - 1];
      //   cout << arr[i] << " " << arr[i + 1] << endl;
    }
    cout << sum << endl;
  }
}