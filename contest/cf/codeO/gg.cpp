#include <iostream>
#include <string>
using namespace std;
int main() {
  /*start*/
  int t;
  cin >> t;
  while (t != 0) {
    int set = 1, mode = 1;
    string arr[t];
    int j = 0, k = t - 1;
    for (int i = 0; i < t; i++) {
      string s;
      cin >> s;
      if (mode == 1) {
        arr[j] = s;
        j++;
        mode = -mode;
      } else if (mode == -1) {
        arr[k] = s;
        k--;
        mode = -mode;
      }
    }
    cout << "SET " << set << endl;
    set++;
    for (int i = 0; i < t; i++) {
      cout << arr[i] << endl;
    }
    int tt;
    cin >> tt;
    t = tt;
  }
}