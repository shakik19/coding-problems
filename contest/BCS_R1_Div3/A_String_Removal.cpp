//! Bismillah
/*
https://codeforces.com/gym/104289/problem/A
*/
#include "bits/stdc++.h"
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int arr[2] = {0};
    for (int i = 0; i < s.size(); i++) {
      arr[s[i] - 'a']++;
    }
    if (arr[0] == arr[1])
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}