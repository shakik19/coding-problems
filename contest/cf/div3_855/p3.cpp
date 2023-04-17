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
    // ull arr[n];
    vector<long long> arr;
    int a;
    cin >> a;
    if (n == 1) {
      cout << 0 << endl;
      break;
    } else {
      arr.push_back(0);
    }
    int hero = 0, power = 0;
    vector<int> bonous;
    for (int i = 1; i < n - 1; i++) {
      int a;
      cin >> a;
      arr.push_back(i);
      if (a == 0) hero++;
    }
    
  }
}