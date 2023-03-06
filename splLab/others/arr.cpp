#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int r, c;
  cin >> r >> c;
  int arr[r][c];
  int count = 0;
  int frequency[(r * c)] = {0};
  //   int freq[]
  //   memset(freq, 0, sizeof(freq));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
      frequency[()];
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << freq[i][j] << " ";
    }
    cout << endl;
  }
}