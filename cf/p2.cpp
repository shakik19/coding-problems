#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cout << "ENTER SIZE: ";
  cin >> n;
  int m = n - 2;
  int nn = ((n + 1) / 2);
  int mm = ((m + 1) / 2);
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= m; col++) {
      //** "S" printing
      // if (row == 1 || row == nn || row == n ||
      //     ((col == 1 && (row < nn))) ||
      //     ((col == m && (row > nn)))) {
      //   cout << "S ";
      // } else {
      //   cout << "  ";
      // }
      // cout << "   ";
      //** "H" printing
      // if (col == 1 or col == m || row == nn) {
      //   cout << "H ";
      // } else {
      //   cout << "  ";
      // }

      // cout << "   ";

      //** "A" printing

      if ((col == mm and row == 1) || (col == 1 or col == m) ||
          row == ((n + 3) / 2)) {
        cout << "A ";
      } else {
        cout << "  ";
      }

      // cout << "   ";

      //** "K" printing
      // cout << "   ";

      //** "I" printing
      // cout << "   ";

      //** "K" printing

      //*! Break
    }
    cout << endl;
  }
}