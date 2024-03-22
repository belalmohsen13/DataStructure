#include <stdio.h>

int BinarySearchIterative(int arr[], int n, int x) {
  int start = 0;
  int end = n - 1;

  while (start <= end) {
    int mid = (start + end) / 2;
    if (x == arr[mid]) {
      return mid;
    } else if (x < arr[mid]) {
      end = mid - 1;

    } else {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 4, 3, 5, 6, 7, 2, 9};
  int n = (sizeof(arr) / sizeof(arr[0]));
  int x;

  printf("enter the number that you want to search :");
  scanf("%d", &x);

  int y = BinarySearchIterative(arr, n, x);
  if (y != -1) {
    printf(" the number that  searched %d it's index is %d:", x, y);
  } else {
    printf("not valid");
  }
}