#include <bits/stdc++.h>
using namespace std;
int main() {
  // Start from here
  int curr[] = {100, 50, 20, 10, 5, 2, 1};
  int tk;
  cout << "Enter amount: ";
  cin >> tk;
  for (int i = 0; i < 7; i++) {
    int cnt = tk / curr[i];
    tk %= curr[i];
    cout << curr[i] << " : " << cnt << endl;
  }
  int a = 990, b = 45;
  int mx = max(a, b);
}