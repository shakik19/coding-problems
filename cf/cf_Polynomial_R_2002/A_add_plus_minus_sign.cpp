#include "bits/stdc++.h"
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string str;
    cin >> n >> str;
    int mode = 1;
    int i = 0;
    if (str[0] == '1') {
      mode = -1;
      i = 1;
    }
    while (i < n) {
      if (str[i] == '1') {
        if (mode == 1) {
          cout << "+";
          mode = -mode;
        } else {
          cout << "-";
          mode = -mode;
        }
      } else {
        if (i > 0) cout << "+";
      }
      i++;
    }
    cout << endl;
  }
}