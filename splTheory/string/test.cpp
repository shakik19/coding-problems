#include <stdio.h>
#include <string.h>

#define ll long long
#define ull unsigned long long
#define imx INT_MAX
#define imn INT_MIN

int main() {
  char name[50];
  fgets(name, sizeof(name), stdin);
  fputs(strrev(name), stdout);
}