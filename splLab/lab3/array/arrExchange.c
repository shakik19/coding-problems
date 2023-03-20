#include <stdio.h>

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int a, b;
  scanf("%i", &a);
  ll aa[a];
  for (int i = 0; i < a; i++) {
    scanf("%i", &aa[i]);
  }
  scanf("%i", &b);
  int max = (a > b) ? a : b;
  ll bb[b];
  for (int i = 0; i < b; i++) {
    scanf("%i", &bb[i]);
  }
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
      printf("%i ", temp[i]);
    }
    printf("\na > b\n");
  } else if (b > a) {
    printf("Array A : ");
    for (int i = 0; i < b; i++) {
      printf("%i ", temp[i]);
    }
    printf("\nArray A : ");
    for (int i = 0; i < a; i++) {
      printf("%i ", bb[i]);
    }
    printf("\na < b\n");
  }
}
