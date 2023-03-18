#include "bits/stdc++.h"
using namespace std;

int main() {
  int n;
  cin >> n;
  int o, t;
  int sp = n + (n - 1) - 2;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    for (int space = 1; space <= sp; space++) {
      cout << "_";
    }
    sp -= 2;
    for (int j = (i == n) ? i - 1 : i; j >= 1; j--) {
      cout << j;
    }
    cout << endl;
  }
}