//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

int solve() {
  string s;
  cin >> s;
  for (int i = 2; i < s.size(); i++) {
    if (s[i - 2] == s[i - 1] && s[i - 1] == s[i]) return 1;
  }
  return -1;
}

int solve2(string s) {
  int count = 1;
  bool flag = true;
  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] != s[i]) {
      flag = false;
      count = 1;
    } else {
      flag = true;
    }

    if (flag) {
      count++;
    }

    if (count == 3) {
      cout << "YES\n";
      return 1;
    }
  }
  return -1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    cout << solve2(s) << endl;
  }
}
