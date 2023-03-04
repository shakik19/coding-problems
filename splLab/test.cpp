#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  int arr[n], count = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = i - 1; j >= 0; j--) {
      if (arr[i] == arr[j]) {
        for (int k = j; k < n; k++) {
          arr[k] = arr[k + 1];
        }
        count++;
      }
    }
  }

  // printing
  for (int i = 0; i < (n - count); i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}