//! Bismillah

/*
? Problem Source -> https://codeforces.com/gym/104261/problem/H
*/

#include "bits/stdc++.h"
using namespace std;

int half_kmp(string str) {
  int len = str.length();
  int index = 0, i = 1;
  vector<int> lps(len, 0);
  while (i < len) {
    if (str[index] == str[i]) {
      lps[i] = index + 1;
      index++;
      i++;
    } else {
      if (index != 0) {
        index = lps[index - 1];
      } else {
        lps[i] = index;
        i++;
      }
    }
  }
  return lps[len - 1];
}

void solve() {
  int q;
  cin >> q;
  string s = "";
  while (q--) {
    int t;
    cin >> t;
    if (t == 0) {
      string neu;
      cin >> neu;
      s += neu;
    } else {
      int ans = s.length() - half_kmp(s);
      cout << ans << "\n";
    }
  }
}

int main() { solve(); }