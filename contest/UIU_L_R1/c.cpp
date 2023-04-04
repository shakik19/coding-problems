#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define ulli unsigned long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
int main() {
  int n;
  cin >> n;
  lli arr1[n];
  lli arr2[n];
  lli ans = 0;
  lli sum1 = 0, sum2 = 0;
  for (lli i = 0; i < n; i++) {
    cin >> arr1[i];
    sum1 += arr1[i];
  }
  for (lli i = 0; i < n; i++) {
    cin >> arr2[i];
    sum2 += arr2[i];
  }

  if (sum1 > sum2) {
    cout << "-1\n";
  } else {
    for (lli i = 0; i < n; i++) {
      ans += (arr1[i] >= arr2[i]) ? arr1[i] - arr2[i] : arr2[i] - arr1[i];
    }
    cout << ans << "\n";
  }
}

// sort(arr1, arr1 + n);
// sort(arr2, arr2 + n);
// for (int i = 0; i < n; i++) {
//   cout << arr1[i] << " ";
// }
// cout << "\n";
// for (int i = 0; i < n; i++) {
//   cout << arr2[i] << " ";
// }
// cout << "\n";