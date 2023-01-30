// Solved by CypheR19

#include <bits/stdc++.h>
using namespace std;

int main() {
  // Start from here
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    bool ok;
    for (int j = 0; j < n; j++) {
      ok = false;
      for (int k = 0; k < n; k++) {
        if (arr[j] != arr[k]) {
          if ((arr[j] % 2 == 0 && arr[k] % 2 == 0) ||
              (arr[j] % 3 == 0 && arr[k] % 3 == 0) ||
              (arr[j] % 5 == 0 && arr[k] % 5 == 0) ||
              (arr[j] % 7 == 0 && arr[k] % 7 == 0)) {
            cout << "YES" << endl;
            ok = true;
            break;
          }
        }
      }
      if (ok) {
        break;
      }
    }
    if (!ok) {
      cout << "NO" << endl;
    }
  }
}