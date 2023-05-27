//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1833/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<string, int> notes;
  for (int i = 1; i < n; i++) {
    string k = "";
    k += s[i - 1];
    k += s[i];
    notes[k]++;
  }
  cout << notes.size() << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}