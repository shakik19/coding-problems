#include "bits/stdc++.h"
using namespace std;

#define pf printf
#define sf scanf
#define ll long long
#define ull unsigned long long

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    /* code */
    cout << i << " ";
  }
  cout << endl;

  for (int row = 1; row < t - 1; row++) {
    for (int j = t - row; j > 1; j--) {
      cout << "  ";
    }
    cout << t - row << endl;
  }
  for (int i = 1; i <= t; i++) {
    /* code */
    cout << i << " ";
  }
  cout << endl;
}