#include <stdio.h>

#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int n;
  cin >> n;
  int arr[100];
  for (int i = 0; i < n; i++) {
    /* code */
    cin >> arr[i];
  }
  printf("%-8s%-8s\n", "Index", "Value");
  for (int i = 0; i < 12; i++) {
    /* code */
    cout << "_";
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    /* code */
    printf("%-10i%-10i\n", i, arr[i]);
  }
}