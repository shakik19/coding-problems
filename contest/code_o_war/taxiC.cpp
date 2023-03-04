#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }
  int one = 0, two = 0, three = 0;
  int taxi = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num == 1) {
      one++;
    } else if (num == 2) {
      two++;
    } else if (num == 3) {
      three++;
    } else if (num == 4) {
      taxi++;
    }
  }
  if (one > three && three != 0) {
    taxi += three;
    three = 0;
    one = one - three;
  } else if (one < three && one != 0) {
    taxi += one;
    three = three - one;
    one = 0;
    taxi += three;
  } else if (three == one) {
    taxi += three;
    three = 0;
    one = 0;
  }
  if (two > 2) {
    taxi += two / 2;
    two = two % 2;
  }
  if (one >= 2 and two == 1) {
    taxi++;
    one = one - 2;
    two = 0;
  }
  if (one >= 4) {
    taxi += one / 4;
    one = one - ((one / 4) * 4);
  }
  if (one > 0 && two > 0)
    taxi++;
  else {
    if (one > 0) taxi++;
    if (two > 0) taxi++;
  }
  if (three > 0) {
    taxi += three;
  }
  //   sort(arr, arr + n);
  cout << taxi << endl;
}
