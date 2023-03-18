#include "bits/stdc++.h"
using namespace std;

int main() {
  int n;
  cin >> n;
  int midn = (n - 1) / 2;
  int trigger = 0;
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      if (col >= midn - trigger && col <= midn + trigger) {
        cout << "X";
      } else {
        cout << " ";
      }
    }
    cout << endl;
    if (row < midn) {
      trigger++;
    } else {
      trigger--;
    }
  }
}