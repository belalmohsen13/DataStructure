#include <stdio.h>

int BinarySearchRecursive(int arr[], int low, int high, int x);
int main() {
  int arr[] = {1, 4, 3, 5, 6, 7, 2, 9};
  int n = (sizeof(arr) / sizeof(arr[0]));
  int x;

  printf("enter the number that you want to search :");
  scanf("%d", &x);

  int y = BinarySearchRecursive(arr, 0, 1, x);
  if (y != -1) {
    printf(" the number that  searched %d it's index is %d:", x, y);
  } else {
    printf("not valid");
  }
}
int BinarySearchRecursive(int arr[], int low, int high, int x) {
  if (low > high) {
    return -1;
  }
  int mid = (high + low) / 2;
  if (x == arr[mid]) {
    return mid;
  } else if (x < arr[mid]) {
    BinarySearchRecursive(arr, low, mid - 1, x);
  } else {
    BinarySearchRecursive(arr, mid + 1, high, x);
  }
}
