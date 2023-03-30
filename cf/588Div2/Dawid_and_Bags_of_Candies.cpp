#include "bits/stdc++.h"
using namespace std;

#define lli long long int
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

int main() {
  vi arr(4);
  for (int i = 0; i < 4; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  if (arr[0] + arr[1] + arr[2] == arr[3] ||
      arr[0] + arr[3] == arr[1] + arr[2]) {
    YES;
  } else {
    NO;
  }
}