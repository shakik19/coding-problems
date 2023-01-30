#include <bits/stdc++.h>

using namespace std;
int main() {
  //   int n;
  //   cin >> n;
  //   string str[n];
  //   cin >> str;
  string str;
  cin >> str;
  int len = sizeof(str) / sizeof(str[0]);
  while (len--) {
    cout << str[len];
  }
  cout << endl;
}