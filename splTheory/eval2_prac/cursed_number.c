#include "math.h"
#include "stdio.h"

int sectumSempra(int a);
int checkerFunc1(int a);
int checkerFunc2(int a);
int checkerFunc3(int a);
int checkerFunc4(int a);
int strongChecker(int a);
int defectiveChecker(int a);
int facto(int a);
int digit_count(int a);

int main() {
  // int start, end;
  // scanf("%i %i", &start, &end);
  // for (int i = start; i <= end; i++) {
  //   if (sectumSempra(i)) {
  //     printf("Num: %i is cursed\n", i);
  //   } else {
  //     printf("Num: %i is not cursed\n", i);
  //   }
  // }
  printf("Checker1: %2i\n", checkerFunc1(7342));
  printf("Checker1: %2i\n", checkerFunc1(734));

  printf("\nChecker2: %2i\n", checkerFunc2(2345));
  printf("Checker2: %2i\n", checkerFunc2(12345));

  printf("\nChecker4: %i\n", checkerFunc4(71723));
  printf("Checker4: %i\n", checkerFunc4(21223));

  printf("\nStrong Check: %i\n", strongChecker(145));
  printf("Defective check: %i\n", defectiveChecker(21));
}

int sectumSempra(int a) {
  if (checkerFunc1(a) == 1) {
    if (checkerFunc2(a) == 1) {
      if (checkerFunc4(a) == 1) {
        if (checkerFunc3(a) == 1) {
          return 1;
        } else {
          return -1;
        }
      } else {
        return -1;
      }
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

// int sectumSempra(int a) {
//   if (checkerFunc1(a) == 1 && checkerFunc2(a) == 1 && checkerFunc3(a) == 1 &&
//       checkerFunc4(a) == 1)
//     return 1;
//   else
//     return -1;
// }

int strongChecker(int a) {
  int sum = 0, tempa = a;
  while (tempa > 0) {
    int last = tempa % 10;
    sum += facto(last);
    tempa /= 10;
  }
  if (sum == a) {
    return 1;
  } else {
    return -1;
  }
}

int facto(int a) {
  int f = 1;
  while (a != 1) {
    f *= a;
    a--;
  }
  return f;
}

int defectiveChecker(int a) {
  int sum = 0;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      sum += i;
    }
  }
  if (sum < (2 * a)) {
    return 1;
  } else {
    return -1;
  }
}

int checkerFunc1(int a) {
  int end = a % 10, first, temp = a;
  if (end == 9 || end == 2) {
    return -1;
  }
  while (temp > 0) {
    int last = temp % 10;
    if (temp / 10 == 0) first = temp;
    temp /= 10;
  }
  printf("%i\n", first);
  if (first == 7 || first == 1) {
    return 1;
  } else {
    return -1;
  }
}

int checkerFunc2(int a) {
  for (int i = digit_count(a); i > 0; i--) {
    int last = a % 10;
    if ((i % 2 == 0) && ((last % 2) == 0)) return -1;
    if ((i % 2 == 1) && ((last % 2) == 1)) return -1;
    a /= 10;
    // printf("Checker2\n");
  }
  return 1;
}

int digit_count(int a) {
  int count = 0;
  while (a > 0) {
    a /= 10;
    count++;
  }

  return count;
}

int checkerFunc3(int a) {
  if (strongChecker(a)) {
    if (defectiveChecker(a) == -1) {
      return 1;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

int checkerFunc4(int a) {
  int len = digit_count(a);
  int count = len - 1;
  int arr[len];
  while (a > 0) {
    int last = a % 10;
    arr[count] = last;
    count--;
    a /= 10;
  }
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      int sumSq = arr[i] * arr[i] + arr[j] * arr[j];
      if ((sumSq % 7) == 0) return 1;
    }
  }
  return -1;
}