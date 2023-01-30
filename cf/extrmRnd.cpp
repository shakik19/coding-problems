#include <bits/stdc++.h>
using namespace std;
#define MIN_MAX 2147483647;
int main() {
  // Start from here
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
      if ((i <= 9) || (i % 10 == 0)) {
        count++;
      }
    }
    cout << count << endl;
  }
}