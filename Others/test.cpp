#include <bits/stdc++.h>
using namespace std;
unsigned int facto(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return (n * facto(n - 1));
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, v;
        cin >> k;
        bool check = true;
        for (int i = k - 1; i < k; i--) {
            v = facto(i) + facto(i - 1);
            //   if (v == (int)v) {
            //     check = false;
            //     cout << v << endl;
            //   }
        }
        // if(check){
        //     cout <<
        // }
        cout << v << endl;
    }
}