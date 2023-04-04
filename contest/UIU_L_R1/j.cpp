#include "bits/stdc++.h"
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    string ans = s;
    reverse(s.begin(), s.end());
    cout << s << ans << endl;
  }
}