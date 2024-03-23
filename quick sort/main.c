#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int start, int end) {
  int pivot = arr[end];
  int i = start - 1;

  for (int j = start; j <= end - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[end]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {1, 4, 3, 5, 6, 7, 2, 9};
  int n = (sizeof(arr) / sizeof(arr[0]));

  printf("quick sort\n");
  quickSort((arr), 0, 9);
  for (int i = 0; i < n; i++) {
    printf("arr[%d]=%d\n", i, arr[i]);
  }
}
