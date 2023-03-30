#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int solve() {
  std::vector<int> arr(4);
  for (int i = 0; i < 4; i++) {
    cin >> arr[i];
  }
  int count = 0;
  while (1) {
    std::vector<int> temp(4);
    if ((arr[0] < arr[1] && arr[0] < arr[2]) &&
        (arr[2] < arr[3] && arr[1] < arr[3])) {
      cout << "YES" << endl;
      return 0;
    } else {
      count++;
      if (count > 3) {
        cout << "NO" << endl;
        return 0;
      }
      temp = arr;
      arr[0] = temp[2];
      arr[1] = temp[0];
      arr[2] = temp[3];
      arr[3] = temp[1];
    }
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

//! 0 1 2 3

//! 1 3 5 7
//! 5 1 7 3
//! 7 5 3 1
//! 3 7 1 5
//! 1 3 7 5