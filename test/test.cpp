#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int length, int target) {
  int lp = 0, rp = length - 1, mid;
  while (lp <= rp) {
    mid = lp + (rp - lp) / 2;
    if (arr[mid] == target) {
      return mid;
    }
    if (arr[mid] > target) {
      rp = mid - 1;
    } else {
      lp = mid + 1;
    }
  }
  return -1;
}
void bubbleSort(int *arr, int length) {
  for (int j = 0; j < length - 1; j++) {
    bool swapped = false;
    for (int k = 0; k < length - j - 1; k++) {
      if (arr[k] > arr[k + 1]) {
        swap(arr[k], arr[k + 1]);
        swapped = true;
      }
      if (!swapped) {
        break;
      }
    }
  }
  for (int i = 0; i < length - 1; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {10, 8, 6, 4, 2, -2, -4};
  int len = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, len);
  int t;
  cout << "Enter target: ";
  cin >> t;
  cout << "Target index in array: " << binarySearch(arr, len, t) << endl;
}