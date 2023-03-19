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
    int a, q;
    cin >> a >> q;

    //! Array
    vector<int> arr(a);
    vector<int> tempArr(a);
    for (int i = 0; i < a; i++) {
      int m;
      cin >> m;
      arr.push_back(m);
    }
    tempArr = arr;
    cout << tempArr.size() << endl;

    //! Queries
    // while (q--) {
    //   int arrSum = 0;
    //   int l, r, k;
    //   cin >> l >> r >> k;
    //   for (int j = l - 1; j < r; j++) {
    //     tempArr[j] = k;
    //   }
    //   for (int i = 0; i < a; i++) {
    //     arrSum += tempArr[k];
    //     tempArr[i] = arr[i];
    //   }
    //   if (arrSum % 2 == 1)
    //     cout << "YES" << endl;
    //   else
    //     cout << "NO" << endl;
    // }
  }
}