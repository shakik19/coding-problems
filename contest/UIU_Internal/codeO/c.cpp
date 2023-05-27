#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int k;
  cin >> k;
  if (k == 1) {
    cout << "Alas! Farha is bitten by snake. She is now at 75." << endl;
  } else if (k == 4) {
    cout << "Alas! Farha is bitten by snake. She is now at 79." << endl;
  } else if (k == 5) {
    cout << "Farha is on ladder." << endl;
  } else if (k == 6) {
    cout << "Yay! Farha has won the game. She is now at 100." << endl;
  } else {
    cout << "Nothing happened to her." << endl;
  }
}