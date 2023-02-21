#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int a, b;
  cin >> a;
  ll aa[a];
  // Taking 2 array inputs
  for (int i = 0; i < a; i++) {
    cin >> aa[i];
  }
  cin >> b;
  ll bb[b];
  for (int i = 0; i < b; i++) {
    cin >> bb[i];
  }
  // swapping
  int max;
  (a > b) ? max = a : max = b;
  ll temp[max];
  if (a == b) {
    for (int i = 0; i < a; i++) {
      // Swapping values using Bitwise XOR
      aa[i] = aa[i] ^ bb[i];
      bb[i] = aa[i] ^ bb[i];
      aa[i] = aa[i] ^ bb[i];
    }
  } else {
    if (a > b) {
      for (int i = 0; i < a; i++) {
        temp[i] = aa[i];
        if (b > i) aa[i] = bb[i];
      }
    } else {
      for (int i = 0; i < b; i++) {
        temp[i] = bb[i];
        if (a > i) bb[i] = aa[i];
      }
    }
  }
  if (a == b) {
    cout << "Array A : ";
    for (int i = 0; i < a; i++) {
      cout << aa[i] << " ";
    }
    cout << "\nArray B : ";
    for (int i = 0; i < a; i++) {
      cout << bb[i] << " ";
    }
    cout << "\na = b\n";
  } else if (a > b) {
    cout << "Array A : ";
    for (int i = 0; i < b; i++) {
      cout << aa[i] << " ";
    }
    cout << "\nArray B : ";
    for (int i = 0; i < a; i++) {
      cout << temp[i] << " ";
    }
    cout << "\na > b\n";
  } else if (b > a) {
    cout << "Array A : ";
    for (int i = 0; i < b; i++) {
      cout << temp[i] << " ";
    }
    cout << "\nArray B : ";
    for (int i = 0; i < a; i++) {
      cout << bb[i] << " ";
    }
    cout << "\na < b\n";
  }
}
