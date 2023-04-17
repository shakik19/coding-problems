#include "bits/stdc++.h"
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n), b(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    sum += b[i];
  }

  double A = static_cast<double>(accumulate(a.begin(), a.end(), 0)) / n;
  double B = static_cast<double>(accumulate(b.begin(), b.end(), 0)) / n;
  int x = static_cast<int>(round((A + B + (sum % 2)) / 2));

  for (int i = 0; i < n; i++) {
    if (a[i] > x || b[i] > x) {
      cout << "-1\n";
      return 0;
    }
  }

  long long total_ops = 0;
  for (int i = 0; i < n; i++) {
    total_ops += abs(a[i] - x) + abs(b[i] - x);
  }
  cout << total_ops << "\n";

  return 0;
}
