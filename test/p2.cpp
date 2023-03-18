#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int arr[100][100];
  int i, j, t1 = 0, t2 = 1, t3, x, y, z;
  for (int i = 0; i < 5; i++) {
    x = t1, y = t2, z = t1 + t2;
    for (int j = 0; j < 5; j++) {
      t3 = t1 + t2;
      arr[j][i] = t3;
      t1 = t2;
      t2 = t3;
    }
    t1 = y;
    t2 = z;
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}