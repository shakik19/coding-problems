#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define MIN_MAX 2147483647;
int main() {
  // Start from here
  int t;
  cin >> t;
  while (t--) {
    int n, cnt = 0;
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++) {
      cin >> str[i];
      if (str[i] == '1') {
        cnt++;
      }
    }
    if (cnt == 0) {
      while (n - 1 != 0) {
        cout << "+";
        n--;
      }
      return 0;
    }
    int cnt2 = cnt;
    int cnt3 = 0;
    cnt /= 2;
    for (int i = 0; i < n - 1; i++) {
      if (cnt3 == n - 1) {
        break;
      }
      if (str[i] == '1' && str[i + 1] == '0') {
        cout << "+";
        cnt3++;
      } else if (str[i] == '1' && str[i + 1] == '1') {
        if (i > 0 || cnt2 == 2) {
          cout << "-";
          cnt--;
        } else {
          cout << "+";
        }
        cnt3++;
      } else if (str[i] == '0' && str[i + 1] == '0') {
        cout << "+";
        cnt3++;
      } else if (str[i] == '0' && str[i + 1] == '1') {
        if (i > 0) {
          cout << "-";
          cnt--;
        } else {
          cout << "+";
        }
        cnt3++;
      }
      if (cnt3 == n - 1) {
        break;
      }
      if (cnt == 0 && i != n - 2) {
        for (int j = i; j < n - 1; j++) {
          cout << "+";
          cnt3++;
          if (cnt3 == n - 1) {
            break;
          }
        }
        break;
      } else if (cnt == 0) {
        break;
      }
    }
    cout << endl;
  }
}