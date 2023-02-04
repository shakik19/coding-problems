#include "bits/stdc++.h"
using namespace std;
char tLow(char s) {
  if (s < 'Z' && s > 'A') {
    return ((s - 'A') + 'a');
  } else {
    return s;
  }
}
int main() {
  char name[50];
  cin >> name;
  int len = strlen(name);
  for (int i = 0; i < len; i++) {
    cout << tLow(name[i]);
  }
  cout << endl;
}