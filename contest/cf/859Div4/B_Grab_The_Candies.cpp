//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/1807/problem/B
*/

#include "bits/stdc++.h"
using namespace std;

#define ll long long

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