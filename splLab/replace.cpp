#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int r, c;
  cin >> r >> c;
  int arr[r][c];
  memset(arr, 0, sizeof(arr));
  int p = 0;
  // input taking
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      int n;
      cin >> n;
      arr[i][j] = n;
      if (j > 0) {
        for (int k = 0; k <= i; k++) {
          bool need = false;
          for (int l = 0; l < c; l++) {
            if (i == k && j == l) {
              p++;
              continue;
            }
            if (arr[k][l] == n) {
              arr[i][j] == -1;
              need = true;
              break;
            }
            if (need) {
              p++;
              break;
            }
          }
        }
      }
    }
  }
  // Printing
  cout << "REPLACED\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << p << endl;
}