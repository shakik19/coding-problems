#include "bits/stdc++.h"
using namespace std;
void strrev(char s[]) {
  for (int i = 0, j = strlen(s) - 1; i < (j + 1) / 2; i++) {
    s[i] = s[i] ^ s[j - i];
    s[j - i] = s[i] ^ s[j - i];
    s[i] = s[i] ^ s[j - i];
  }
}

int main() {
  // start
  char str1[100] = "This journey is";
  char str2[100] = "beautiful";
  int i;
  strncpy(str1, str2, 8);
  for (int i = 3; str1[i] != '\0'; i++) {
    str1[i] = str2[strlen(str1) - i];
  }
  cout << str2[strlen(str1) - 3] << endl;
  strncat(str2, str1, 3);
  printf("String 1: %s\n", str1);
  str2[i - 2] = '\0';
  printf("string 2: %s\n", str2);
  for (int i = 5; i > 2; i--) {
    strrev(str1);
  }
  printf("Final: %s\n", str1);
}