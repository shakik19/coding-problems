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
    if (i == 1 or i == t) {
      cout << "1";
      for (int l = 0; l < t - 1; l++) cout << "..";
      cout << t << endl;
    }
    for (int space = 0; space < i; space++) cout << " ";
    cout << i;
  }
}