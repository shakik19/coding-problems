#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve() {
  string s, ss;
  cin >> ss;
  ss = s;
  reverse(s.begin(), s.end());
  cout << s << ss << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}