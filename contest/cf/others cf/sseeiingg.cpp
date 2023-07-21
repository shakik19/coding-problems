#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
  string s;
  cin >> s;
  string ss = s;
  reverse(ss.begin(), ss.end());
  cout << s << ss << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}