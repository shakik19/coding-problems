#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  int mid = (n + 1) / 2, count = 0;
  for (int i = 0; i < n; i++) {
    /* code */
    for (int j = 0; j < n; j++) {
      if (i < mid) {
        if (j == count || j == n - count) {
          cout << "*";
        } else {
          cout << " ";
        }
      } else {
        if (j == mid) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }
    count++;
    cout << endl;
  }
}