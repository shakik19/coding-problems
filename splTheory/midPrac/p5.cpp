#include "bits/stdc++.h"
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n][n];
  int c[n * n], count = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
      c[count] = arr[i][j];
      for (int k = count - 1; k >= 0; k--) {
        if (c[k] == c[count]) {
          arr[i][j] = -1;
        }
      }
      count++;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}