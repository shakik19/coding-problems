//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << endl

int main() {
  int t;
  cin >> t;
  int ca = 0, cp = 0;
  while (t--) {
    int p, a;
    cin >> p >> a;
    if (p < a) cp++;
    if (p > a) ca++;
  }
  if (cp > ca) cout << "Programmers win!\n";
  if (cp < ca) cout << "AI bot wins!\n";
  if (cp == ca) cout << "It's a tie!\n";
}