//! Bismillah
#include "bits/stdc++.h"
using namespace std;
typedef long long int lli;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    lli p1 = ((h1 * 60) + m1) * 60 + s1;
    lli p2 = ((h2 * 60) + m2) * 60 + s2;
    if (p1 > p2)
      cout << "Player2\n";
    else if (p1 < p2)
      cout << "Player1\n";
    else
      cout << "Tie\n";
  }
}