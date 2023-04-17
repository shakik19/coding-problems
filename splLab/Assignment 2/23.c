#include <stdio.h>

#include "stdbool.h"
int find_substr(char str1[], char str2[]);
int str_length(char s[]);
int main(void) {
  char str1[10000], str2[10000];
  scanf("%s %s", str1, str2);
  int len1 = str_length(str1), len2 = str_length(str2);

  if ((len1 > len2) ? find_substr(str1, str2) : find_substr(str2, str1))
    printf("1\n");
  else
    printf("0\n");
}

int find_substr(char str1[], char str2[]) {
  int len1 = str_length(str1), len2 = str_length(str2);
  for (int i = 0; i < len1; i++) {
    for (int j = 0; j < len2; j++) {
      //   printf("%c %c\n", str1[i], str2[j]);
      if (str1[i] != str2[j]) {
        break;
      } else {
        i++;
      }
      if (j == len2 - 1) return 1;
    }
  }
  return 0;
}

int str_length(char s[]) {
  int count = 0;
  while (s[count] != '\0') {
    count++;
  }
  return count;
}