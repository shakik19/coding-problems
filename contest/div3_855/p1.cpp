#include "bits/stdc++.h"
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char meow[] = {'m', 'e', 'o', 'w'};
    int arr[] = {0};
    int count = 0;
    bool flag;
    for (int i = 0; i < s.length(); i++) {
      s[i] = tolower(s[i]);
      if (s[i] == meow[count]) {
        arr[count]++;
        flag = true;
        continue;
      } else if (s[i] != meow[count]) {
        count++;
        if (s[i] != meow[count] || arr[count - 1] == 0) {
          flag = false;
          break;
        }
      }
    }
    if (flag && count == 3)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}