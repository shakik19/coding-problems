#include "bits/stdc++.h"
using namespace std;
int main() {
  int t, set = 1;
  cin >> t;
  while (t != 0) {
    string arr[t];
    int mode = 1;
    for (int i = 0; i < t; i++) {
      string s;
      cin >> s;
      if (mode == 1) {
        arr[i] = s;
        mode = -mode;
      } else {
        arr[t - 1 - i] = s;
        mode = -mode;
      }
    }
    cout << "SET " << set << endl;
    set++;
    for (int i = 0; i < t; i++) {
      cout << arr[i] << endl;
    }
    int temp;
    cin >> temp;
    t = temp;
  }
}