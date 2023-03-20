#include <stdio.h>
#include <string.h>
int main() {
  char name[100];
  printf("Enter name: ");
  fgets(name, 100, stdin);
  fputs(name, stdout);
}