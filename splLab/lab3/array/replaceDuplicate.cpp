#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int row, col;
  cin >> row >> col;
  int arr[row][col];
  memset(arr, 0, sizeof(arr));
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> arr[i][j];
      for (int k = 0; k <= i; k++) {
        bool flag = false;
        for (int l = 0; l < col; l++) {
          if (i == k && j == l) break;
          if (arr[i][j] == arr[k][l]) {
            arr[i][j] = -1;
            flag = true;
            break;
          }
        }
        if (flag) break;
      }
    }
  }
  cout << "Replaced\n";
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] > -1) cout << " ";
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}