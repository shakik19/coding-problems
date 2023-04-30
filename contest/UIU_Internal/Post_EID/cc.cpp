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
  int ans = 0, count = 0;

  for (int i = 0; i < n; i++) {
    int fr[26] = {0};
    for (int j = i; j < n; j++) {
      //   cout << fr[s[j] - 'a'] << "  " << count << endl;
      if (fr[s[j] - 'a'] == 0) count++;
      fr[s[j] - 'a']++;
      if (count > t || j == n - 1) {
        count = 0;
        ans = max(ans, sumarr(fr));
        break;
      }
    }
  }
  cout << ans << endl;
}

//! abcdeaa