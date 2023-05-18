//! Bismillah
#include "bits/stdc++.h"
using namespace std;

typedef long long int lli;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  int r, c;
  cin >> r >> c;
  char arr[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
    }
  }
  int x, y;
  cin >> x >> y;
  --x;
  --y;
  if (arr[x][y + 1] == '.' || arr[x][y - 1] == '.' || arr[x + 1][y] == '.' ||
      arr[x - 1][y] == '.' || arr[x + 1][y + 1] == '.' ||
      arr[x - 1][y - 1] == '.' || arr[x - 1][y + 1] == '.' ||
      arr[x + 1][y - 1] == '.') {
    cout << "no\n";
  } else {
    cout << "yes\n";
  }
}