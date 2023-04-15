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
    int count = 0;
    int len = s.length();
    if (len == 1 && s[0] == '_') {
      cout << 2 << endl;
      continue;
    }
    if (s[0] == '^' && len == 1) {
      cout << 1 << endl;
      continue;
    }
    for (int i = 0; i < len; i++) {
      if (s[i] == '_') {
        if (i == 0) count++;
        if (s[i + 1] != '^') count++;
      }
    }
    cout << count << endl;
  }
}

//! __ 10110 10110 10110
//!  1 01011 
//!  2 10101 