#include "stdio.h"
#include "string.h"
FILE *f = NULL;
int main() {
  f = fopen("sample.txt", "a");
  int itr = 10;
  char s1[100] = "Shakik!";
  char s2[100] = " goes and..";
  while (itr--) {
    fprintf(f, "%s\n", s1);
    strcat(s1, s2);
  }
  fclose(f);
  f = fopen("sample.txt", "r");
  for (char ptr[100] = {}; fgets(ptr, 100, f);) {
    printf("%s", ptr);
  }

  fclose(f);
}