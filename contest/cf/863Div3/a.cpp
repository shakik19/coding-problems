#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, dd;
    cin >> n >> dd;
    string s;
    cin >> s;
    string d = to_string(dd);
    if (dd == 0) {
      s += d[0];
      cout << s << endl;
      continue;
    }
    bool check = true;
    for (int i = 0; i < n; i++) {
      if (d[0] > s[i]) {
        s.insert(i, d);
        cout << s << "\n";
        check = false;
        break;
      }
    }
    if (check) {
      s += d[0];
      cout << s << "\n";
    }
  }
}