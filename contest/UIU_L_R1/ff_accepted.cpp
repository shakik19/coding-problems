#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << "\n"

int main() {
  int n, d;
  cin >> n >> d;
  int arr[n], rra[n] = {0};
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int j = 0, count = 1, k = 0;
  for (int i = 1; i < n; i++) {
    if (arr[j] >= arr[i]) {
      count++;
      //   cout << j << " " << i << " " << arr[i] << " " << count << endl;
    } else {
      rra[k] = count;
      k++;
      count = 1;
      j = i;
    }
  }
  k++;
  rra[k] = count;

  sort(rra, rra + n, greater<int>());
  int ans = 0;
  for (int i = 0; i < d; i++) {
    ans += rra[i];
  }

  ANS;
}

//! 1 5 7 3 8 2 1 4
//! 0 1 2 3 4 5 6 7