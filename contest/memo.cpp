#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  double arr[50][60];
  cout << "arr[5][10] => " << &arr[5][10] << endl;
  cout << "arr[6][0] => " << &arr[6][0] << endl;
  cout << "arr[15][0] => " << &arr[15][0] << endl;
  cout << "arr[15][20] => " << &arr[15][20] << endl;
}

//? arr[5][10]  =>hex 710 1090 =>dec 11849 3328
//? arr[6][0]   =>hex 710 1220 =>dec 11849 3728
//? arr[15][0]  =>hex 710 2300 =>dec 11849 8048
//? arr[15][20] =>hex 710 23a0 =>dec 11849 8208