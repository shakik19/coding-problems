#include <stdio.h>
#include <string.h>

#define MAX_LEN 105

char s[MAX_LEN];
int cnt[26];

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    memset(cnt, 0, sizeof cnt);
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
      cnt[s[i] - 'a'] += 2;
    }
    int odd = 0;
    for (int i = 0; i < 26; i++) {
      if (cnt[i] & 1) {
        odd++;
      }
    }
    if (odd > 1) {
      printf("-1\n");
    } else {
      char ans[MAX_LEN * 2];
      int l = 0, r = n * 2 - 1;
      for (int i = 0; i < 26; i++) {
        for (int j = 0; j < cnt[i] / 2; j++) {
          ans[l++] = ans[r--] = i + 'a';
        }
      }
      for (int i = 0; i < 26; i++) {
        if (cnt[i] & 1) {
          ans[n - 1] = i + 'a';
          break;
        }
      }
      ans[n * 2] = '\0';
      printf("%s\n", ans);
    }
  }
  return 0;
}
