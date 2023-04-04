#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
int main() {
  int n, d;
  cin >> n >> d;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int freq[2];
  int count = 1, j = 0;
  for (int i = 1; i < n; i++) {
    if (arr[j] > arr[i]) {
      count++;
    } else {
      freq[0] = max(count, freq[0]);
      count = 1;
      j = i;
      //   sort(f, f + d);
      //   cout << freq[0] << endl;
    }
    // cout << arr[j] << endl;
  }
  //   int ans = 0;
  //   for (int k = 0; k < d; k++) {
  //      ans += f[k];
  //     cout << f[k] << " ";
  //   }
  //   cout << ans << endl;
  cout << "\n" << freq[0] << " " << freq[1] << endl;
}