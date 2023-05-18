//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int

lli to_Binary(lli n) {
  int count = 0;
  while (n > 0) {
    int num = n % 2;
    if (num == 1) {
      count++;
    }
    n /= 2;
  }
  lli ans = 0;
  for (int i = 0; i < count; i++) {
    ans += pow(2, i);
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    lli n;
    cin >> n;
    cout << to_Binary(n) << endl;
  }
}