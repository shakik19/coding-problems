#include <bits/stdc++.h>
using namespace std;
int main() {
  string name;
  cin >> name;
  int count = 0;
  int arr[26] = {0};
  for (int i = 0; i < name.length(); i++) {
    arr[name[i] - 'a']++;
    if (arr[name[i] - 'a'] == 1) {
      count++;
    }
  }
  if (count % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }
}