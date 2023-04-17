#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 1) {
      cout << "I hate ";
    } else {
      cout << "I love ";
    }
    if (i != n) {
      cout << "that ";
    }
  }
  cout << "it\n";
}
