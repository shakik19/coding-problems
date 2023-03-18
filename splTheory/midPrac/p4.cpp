#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  int tr[(n / 2) * n], count = 0;
  int arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
      if (j == n - i - 1) {
        tr[count] = arr[i][j];
        count++;
      }
    }
  }
  for (int i = 0; i < count; i++) {
    cout << tr[i] << " ";
  }
  cout << endl;
}