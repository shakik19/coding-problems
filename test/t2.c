#include "stdio.h"
#include "string.h"
int main() {
  char s1[100] = "Das ist Shakik!";
  char s2[100] = "Shakik";
  char s3[100] = "Shakik!";
  char s4[100] = "3210....";
  //   if (strcmp(s3, s2) == 0) printf("S1 = S2\n");
  if (strncmp(s2, s3, 6) == 0) printf("True\n");
  //   printf("%s\n", strrchr(s1, 'i'));
  //   printf("%s\n", strchr(s1, 'S'));
  //   *(strrchr(s1, '\n')) = '\0';
  //   puts(s1);
  //   printf("%s\n", strncpy(s2, s4, 1));
  //   printf("S2 => %s\n", strncat(s2, s4, 6));
  int count = 0;
  char *ptr = s2;
  int n = 3;
  while (n--) {
    strncat(s1, s3, 6);
  }
  puts(s2);
  puts(s1);
  while (*ptr != '\0') {
    count++;
    ptr++;
  }
  //   printf("%i\n", count);
  int match = 0, index;
  for (int i = 0; i < strlen(s1); i++) {
    for (int j = 0; j < count; j++) {
      if (s1[i] != s2[j])
        break;
      else {
        i++;
        if (j + 1 == count) {
          match++;
          index = i;
        }
      }
    }
  }
  if (match > 0) {
    printf("%i Match", match);
    if (match > 1) {
      printf("es Found!\n");
      printf("Last match at index %i\n", index);
    } else {
      printf(" Found!\n");
      printf("First match at index %i\n", index);
    }
  } else
    printf("No match found!\n");
}
