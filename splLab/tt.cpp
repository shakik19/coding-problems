#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  for (int row = 1; row <= n; row++) {
    for (int space = 1; space <= n - row; space++) {
      cout << ". ";
    }
    int mid = (2 * n) / 2;
    int ex = 1;
    for (int val = row; val >= 1; val--) {
      cout << ex << " ";
      ex++;
    }

    cout << endl;
  }
}