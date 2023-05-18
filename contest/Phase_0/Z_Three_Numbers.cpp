//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << endl

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int K, S;
  cin >> K >> S;
  int count = 0;
  for (int i = 0; i <= K; i++) {
    for (int j = 0; j <= K; j++) {
      int cmp = S - i - j;
      if (cmp >= 0 && cmp <= K) count++;
    }
  }
  cout << count << "\n";
  return 0;
}