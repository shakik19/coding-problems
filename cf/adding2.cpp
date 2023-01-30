#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define MIN_MAX 2147483647;
int main() {
  // Start from here
  int t;
  cin >> t;
  while (t--) {
    int n;
    string str;
    cin >> n >> str;
    int val = 0;
    if (str[0] == '1') {
      val = 1;
    }
    for (int i = 1; i < n; i++) {
      if (str[i] == '1') {
        if (val > 0) {
          cout << "-";
          val--;
        } else {
          cout << "+";
          val++;
        }
      } else {
        cout << "+";
      }
    }
    cout << endl;
  }
}