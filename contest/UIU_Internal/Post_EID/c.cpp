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

int sumarr(int arr[]) {
  int sum = 0;
  for (int i = 0; i < 26; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  int ans = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    int arr[26] = {0};
    for (int j = i; j < n; j++) {
      if (arr[s[j] - 'a'] == 0) {
        count++;
      }
      if (count > t) {
        ans = max(ans, sumarr(arr));
        count = 0;
        break;
      }
      arr[s[j] - 'a'] += 1;
    }
  }
  cout << (ans) << endl;
}