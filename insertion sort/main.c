#include <stdio.h>

void InsertationSort(int arr[], int n) {

  for (int i = 1; i < n - 1; i++) {
    int value = arr[i];
    int hole = i;
    while (hole > 0 && arr[hole - 1] > value) {
      arr[hole] = arr[hole - 1];
      hole--;
    }
    arr[hole] = value;
  }
}

int main() {
  int arr[] = {1, 4, 3, 5, 6, 7, 2, 9};
  int n = (sizeof(arr) / sizeof(arr[0]));

  printf("bubble sort\n");
  InsertationSort(arr, n);
  for (int i = 0; i < n; i++) {
    printf("arr[%d]=%d\n", i, arr[i]);
  }
}
