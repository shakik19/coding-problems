//! Bismillah

/*
? Problem Source -> https://codeforces.com/contest/
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;
#define mp make_pair;
#define pb push_back;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  vector<pair<int, int>> ans;
  for (auto &i : v) cin >> i;
  sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if ((v[i] - v[j]) == k) ans.push_back(make_pair(v[i], v[j]));
    }
  }
  for (auto &i : ans) printf("(%i, %i)\n", i.first, i.second);
  printf("\n");
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

/*

Test Cases:

6
6 1
5 7 4 3 1 6
6 2
5 -7 4 3 1 6
3 3
2 1 4
5 5
-3 2 5 1 0
7 1
6 2 9 3 7 5 8
6 7
-4 2 7 -1 3 5

Answers:
(7, 6)
(6, 5)
(5, 4)
(4, 3)

(6, 4)
(5, 3)
(3, 1)

(4, 1)

(5, 0)
(2, -3)

(9, 8)
(8, 7)
(7, 6)
(6, 5)
(3, 2)

(3, -4)

*/