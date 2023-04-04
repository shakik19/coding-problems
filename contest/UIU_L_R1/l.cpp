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
    int l;
    string s;
    cin >> l;
    cin >> s;

    int count = 1;
    string ss;
    for (int i = 1; i <= l; i++) {
      if (s[i - 1] == s[i]) {
        count++;
      } else {
        int div = count;  //! 3
        while (1) {
          if (div < 3) break;
          int temp = div % 3;      //! 1
          div = (div / 3) + temp;  //! 3
        }
        while (div--) {
          cout << s[i - 1];
        }
        count = 1;
      }
    }
    cout << "\n";
  }
}

//! a a a | b b | c c c| c c  c|  c  c  c|  c  c
//? 0 1 2 | 3 4 | 5 6 7| 8 9 10| 11 12 13| 14 15
