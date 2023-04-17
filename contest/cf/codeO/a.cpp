#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  int today = 0;
  ll arr[n + 1];
  for (int i = 1; i <= n; i++) {
    int s, d;
    cin >> s >> d;
    if (n > 1) {
      int j = 0;
      while (1) {
        if (s + (j * d) > today) {
          today = arr[i] = s + (j * d);
          break;
        }
        j++;
      }

    } else {
      arr[i] = s;
    }
  }
  cout << arr[n] << endl;
}