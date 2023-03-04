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
  for (int i = 0; i < a; i++) {
    scanf("%i", &aa[i]);
  }
  cin >> b;
  ll bb[b];
  for (int i = 0; i < b; i++) {
    scanf("%i", &bb[i]);
  }
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
    printf("Array A : ");
    for (int i = 0; i < a; i++) {
      printf("%i ", aa[i]);
    }
    printf("\nArray B : ");
    for (int i = 0; i < a; i++) {
      printf("%i ", bb[i]);
    }
    printf("\na = b\n");
  } else if (a > b) {
    printf("Array A : ");
    for (int i = 0; i < b; i++) {
      printf("%i ", aa[i]);
    }
    printf("\nArray B : ");
    for (int i = 0; i < a; i++) {
      cout << temp[i] << " ";
      printf("%i ", temp[i]);
    }
    printf("\na > b\n");
  } else if (b > a) {
    printf("Array A : ");
    for (int i = 0; i < b; i++) {
      printf("%i ", temp[i]);
    }
    cout << "\nArray B : ";
    for (int i = 0; i < a; i++) {
      printf("%i ", bb[i]);
    }
    printf("\na < b\n");
  }
}
