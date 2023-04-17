#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long

int main() {
  ll n, sum = 0;
  cin >> n;
  for (ll i = 1; i < n; i++) {
    sum += (n % i);
  }
  cout << sum << "\n";
}
