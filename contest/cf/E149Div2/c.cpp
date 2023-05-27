//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1837/problem/C
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  string str;
  cin >> str;
  char c = '1';
  for (llu i = 0; i < str.size(); i++) {
    if (str[i] == '?') {
      str[i] = c;
    } else {
      if (str[i] != c and i != 0) {
        c = str[i];
      }
    }
  }
  cout << str << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  llu t;
  cin >> t;
  while (t--) {
    solve();
  }
}