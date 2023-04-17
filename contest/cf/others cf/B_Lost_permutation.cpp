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
    int m, s;
    cin >> m >> s;
    int arr[m];
    for (int i = 0; i < m; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + m);
    int sum = 0, i = 1;
    while (sum < s) {
      if (arr[i] - arr[i - 1] > 1) {
        for (int j = arr[i - 1] + 1; j < arr[i]; j++) {
          sum += j;
        }
        if (sum == s) {
          YES;
          break;
        } else if (sum > s) {
          NO;
          break;
        }
      }
    }
  }
}
//! 0 1 2 3
//! 1 2 3 4
//! 1 3 6 9
