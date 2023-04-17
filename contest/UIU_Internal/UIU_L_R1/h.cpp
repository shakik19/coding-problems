#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

int half_kmp(string str) {
  int len = str.length();
  int index = 0, i = 1;
  vi lps(len, 0);
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

int main() {
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