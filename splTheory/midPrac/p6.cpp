#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  int toggle = 0, temp = toggle;
  for (int i = 1; i <= n; i++) {
    temp += 2;
    toggle = temp;
    for (int j = n - i; j >= 1; j--) {
      cout << "   ";
    }
    for (int j = i; j >= 1; j--) {
      //   cout << toggle << " ";
      printf("%2i ", toggle);
      toggle += 2;
    }
    toggle -= 4;
    for (int j = i - 1; j >= 1; j--) {
      //   cout << toggle << " ";
      printf("%2i ", toggle);
      toggle -= 2;
    }
    cout << endl;
  }
}