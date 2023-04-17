#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll arr[n];
    ll mihaiSum = 0, biancaSum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] % 2 == 0) {
        mihaiSum += arr[i];
      } else {
        biancaSum += arr[i];
      }
    }
    if (mihaiSum > biancaSum) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}