//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int;
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << endl

int main() {
  char s[1000];
  fgets(s, sizeof(s), stdin);
  int arr[26] = {0};
  for (int i = 0; i < strlen(s); i++) {
    char cc = tolower(s[i]);
    arr[cc - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (arr[i] > 0) printf("%c = %i\n", (i + 'a'), arr[i]);
  }
}