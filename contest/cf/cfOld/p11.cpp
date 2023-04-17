#include <bits/stdc++.h>
using namespace std;
int main() {
  // Start from here
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long arr[n];
    int max = 0, min = 2147483647;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] > max) max = arr[i];
      if (arr[i] < min) min = arr[i];
    }
    int dif = (max - min), count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (abs(arr[i] - arr[j]) == dif) {
          count++;
        }
      }
    }
    cout << count << endl;
  }
}