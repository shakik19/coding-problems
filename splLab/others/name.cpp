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
        cout << "S";
        if (col == m) {
          for (int space = 1; space <= m; space++) {
            /* code */
            cout << ".";
          }
        }
      } else {
        cout << ".";
      }
      // cout << "   ";
      //** "H" printing
      if (col == 1 or col == m || row == nn) {
        cout << "H";
      } else {
        cout << "*";
      }

      // cout << "   ";

      //** "A" printing
      //*?Try 1
      if ((col == mm and row == 1) ||
          (((row != 1 and row > nn) and
            (col == mm + col || col == mm - col))) ||
          row == nn) {
        cout << "A";
      } else {
        cout << "  ";
      }
      //*?Try 2
      if (row > nn && (col == 1 || col == m) || (row == nn)) {
        int flag = 0;
        if ((row > 1 && row < nn) && (col == mm - aa || col == mm + aa)) {
          cout << "A";
          aa++;
          flag = 1;
        }
        if (flag == 0) {
          cout << "A";
        }
      } else {
        cout << "  ";
      }
      //*?Try 3
      if (col == 1 || col == m || row == 1 || row == nn) {
        cout << "A ";
      } else {
        cout << ".";
      }
      //*?try 4
      if (col == mm || col == m - mm ||
          (row == nn && col > mm && col < (m - mm))) {
        cout << "A ";
      } else {
        cout << "..";
      }
      cout << "   ";

      //** "K" printing
      if (col == 1 || (col == 2 && row == nn) || (row == (8 - 5))) {
        cout << "K";
      } else {
        cout << "  ";
      }
      cout << "   ";

      // //** "I" printing
      if (col == mm) {
        cout << "I";
      } else {
        cout << " ";
      }
      cout << "   ";

      //** "K" printing

      //*! Break
    }
    cout << endl;
  }
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= m; col++) {
      for (int space = 1; space <= m + 3; space++) {
        cout << ".";
      }
      //     //** "H" printing
      if (col == 1 or col == m || row == nn) {
        cout << "H";
      } else {
        cout << "*";
      }
    }
  }
}