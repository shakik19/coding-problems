#include <stdio.h>
#include <string.h>

#include "stdbool.h"
int find_substr(char str1[], char str2[]);

int main(void) {
  char str1[200], str2[100];
  scanf("%s %s", str1, str2);

  if (find_substr(str1, str2))
    printf("1\n");
  else
    printf("0\n");
}

int find_substr(char str1[], char str2[]) {
  int len1 = strlen(str1), len2 = strlen(str2);
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