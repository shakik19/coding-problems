//! Bismillah

/*
? Source -> https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/Y
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  int r, c;
  cin >> r >> c;

  lls mat[r][c];

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> mat[i][j];
    }
  }

  lls arr[r * c];
  int pos = 0;

  int topR = 0, bottomR = r - 1, leftC = 0, rightC = c - 1;
  while (topR <= bottomR && leftC <= rightC) {
    for (int i = leftC; i <= rightC; i++, pos++) {
      arr[pos] = mat[topR][i];
    }
    topR++;

    for (int i = topR; i <= bottomR; i++, pos++) {
      arr[pos] = mat[i][rightC];
    }
    rightC--;

    if (topR <= bottomR) {
      for (int i = rightC; i >= leftC; i--, pos++) {
        arr[pos] = mat[bottomR][i];
      }
      bottomR--;
    }

    if (leftC <= rightC) {
      for (int i = bottomR; i >= topR; i--, pos++) {
        arr[pos] = mat[i][leftC];
      }
      leftC++;
    }
  }

  for (int i = 0; i < pos; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  solve();
}