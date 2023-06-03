//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1807/problem/A
*/

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
    int arr[3];
    for (int i = 0; i < 3; i++) {
      cin >> arr[i];
    }
    if (arr[0] + arr[1] == arr[2])
      cout << "+" << endl;
    else
      cout << "-" << endl;
  }
}