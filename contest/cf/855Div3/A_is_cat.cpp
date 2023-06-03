//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1800/problem/A
*/

#include "bits/stdc++.h"
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string meow = "meow";
    int tracker = 0;
    bool check = true;
    for (int i = 0; i < n; i++) {
      char ss = tolower(s[i]);
      if (ss == meow[tracker]) {
        tracker++;
      } else if (ss != meow[tracker - 1]) {
        check = false;
        break;
      }
    }
    if (tracker == 4 && check)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}