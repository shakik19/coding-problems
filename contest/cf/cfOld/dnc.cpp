#include <bits/stdc++.h>
using namespace std;
int main() {
  // Start from here
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    int oddCnt = 0, opCnt = 0, sum = 0;
    int minEvn = INT_MAX;
    int minOdd = INT_MAX;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
      if (arr[i] % 2 == 0) {
        minEvn = min(minEvn, arr[i]);
      } else {
        minOdd = min(minOdd, arr[i]);
      }
    }
    if (sum % 2 == 0) {
      cout << 0 << endl;
    } else {
      if (minOdd < minEvn) {
        while (minOdd != 0) {
          minOdd /= 2;
          opCnt++;
        }
      } else {
        while (minEvn != 1) {
          minEvn /= 2;
          opCnt++;
        }
      }
      cout << opCnt << endl;
      cout << minEvn << endl;
      cout << minOdd << endl;
    }
  }
}