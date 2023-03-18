#include "bits/stdc++.h"
using namespace std;

#define pf printf
#define sf scanf
#define ll long long
#define ull unsigned long long

int main() {
  //   int num = 1;
  for (int row = 0; row < 3; row++) {
    for (int i = 1 + row * 5; i <= 5 * row; i++) {
      cout << i << " ";
      //   num++;
    }
    cout << endl;
  }
}