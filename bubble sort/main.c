#include <stdio.h>

void bubblesort(int arr[], int n) {
  int flag = -1;
  for (int k = 0; k < n - 1; k++) {
    for (int i = 0; i < n - k - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        flag = 1;
      }
    }
  }
}

int main() {
  int arr[] = {1, 4, 3, 5, 6, 7, 2, 9};
  int n = (sizeof(arr) / sizeof(arr[0]));

  printf("bubble sort\n");
  bubblesort((arr), n);
  for (int i = 0; i < n; i++) {
    printf("arr[%d]=%d\n", i, arr[i]);
  }
}