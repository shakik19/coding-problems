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
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < 32; i++) {
      if ((n ^ (n - 1)) & (1 << i)) count++;
      cout << ((n ^ (n - 1)) & (1 << i)) << "\n";
    }
    cout << count << "\n";
  }
}