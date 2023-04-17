#include "stdbool.h"
#include "stdio.h"
#include "string.h"
#include "time.h"
const int MAX = 65535;

bool end_indicator(char s) {
  if (s == ' ' || s == '.' || s == '!' || s == '?' || s == ',' || s == ';' ||
      s == 13) {
    return true;
  } else {
    return false;
  }
}

int word_count(char s[]) {
  int count = 1;
  for (int i = 0; i < strlen(s); i++) {
    if (end_indicator(s[i])) {
      count++;
    }
  }
  return count;
}

int main() {
		time_t start, end;
	start = time(NULL);
  char s[MAX];
  fgets(s, sizeof(s), stdin);
  int wordCount = word_count(s);
  char arr[wordCount][MAX];
  int rowCount = 0, charCount = 0;
  for (int i = 0; i < strlen(s) - 1; i++) {
    if (end_indicator(s[i])) {
      arr[rowCount][charCount] = s[i];
      //   printf("%s", arr[rowCount - 1]);
      charCount = 0;
      rowCount++;
    } else {
      arr[rowCount][charCount] = s[i];
      //   printf("%c", arr[rowCount][charCount]);
      charCount++;
    }
  }
  arr[rowCount][charCount] = ' ';
  for (int i = rowCount; i >= 0; i--) {
    printf("%s", arr[i]);
  }
  printf("\n");
  end = time(NULL);
    //printf("\nTime: %0.3f\n", difftime(end, start));
}




