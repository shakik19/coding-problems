#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n == 2) {
      cout << "YES" << endl;
      break;
    }
    string arr[n];
    string pre, suf;
    string preb, sufb;
    int count1 = 0, count2 = 0;
    int nm = (2 * n - 2);
    for (int i = 0; i < nm; i++) {
      cin >> arr[i];
      if (arr[i].size() == 1) {
        if (count1 == 0) {
          pre = arr[i];
          count1++;
        } else if (count1 == 1) {
          suf = arr[i];
        }
      } else if (arr[i].size() == (n - 1)) {
        if (count2 == 0) {
          preb = arr[i];
          count2++;
        } else if (count2 == 1) {
          sufb = arr[i];
        }
      }
    }
    // string s1 = suf + sufb, s2 = sufb + suf, s3 = suf + preb, s4 = preb +
    // suf; string s11 = pre + sufb, s22 = sufb + pre, s33 = pre + preb,
    //        s44 = preb + pre;
    // if (s1.compare(s11) == 1 || s2.compare(s22) == 1 || s3.compare(s33) == 1
    // ||
    //     s4.compare(s44) == 1) {
    //   cout << "YES" << endl;
    // } else {
    //   cout << "NO" << endl;
    // }
    // cout << s11 << " " << s11 << endl;
    cout << count1 << " " << suf << " " << pre << " " << endl;
    cout << count2 << " " << sufb << " " << preb << " " << suf + sufb << endl;
  }
}