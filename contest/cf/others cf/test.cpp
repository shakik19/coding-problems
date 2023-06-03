//! Bismillah

/*
Problem Source -> https://codeforces.com/contest/
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  printf("%i\n", a ^ b + b ^ c + a ^ c);
}
