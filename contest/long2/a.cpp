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
  while (t--) {
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'a')
        a++;
      else
        b++;
    }
    if (a == b)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}