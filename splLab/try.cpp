#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n = 7;
  // cout << "ENTER SIZE: ";
  // cin >> n;
  int m = n - 2;
  int nn = ((n + 1) / 2);
  int mm = ((m + 1) / 2);
  int aa = 0;
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= m; col++) {
      //** "S" printing
      if (row == 1 || row == nn || row == n || ((col == 1 && (row < nn))) ||
          ((col == m && (row > nn)))) {
        cout << "S ";
      } else {
        cout << "  ";
      }
    }
    cout << "\n";
  }

  cout << endl;
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= m; col++) {
      if (col == 1 or col == m || row == nn) {
        cout << "H ";
      } else {
        cout << "  ";
      }
    }
    cout << "\n";
  }
  cout << endl;
}