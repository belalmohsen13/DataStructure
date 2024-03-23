#include <stdio.h>

int DeleteElement(int arr[], int *n, int x) {
  if (x < 0 || x >= (*n - 1)) {
    return -1;
  } else {
    for (int i = x - 1; i < *n - 1; i++) {
      arr[i] = arr[i + 1];
    }
    (*n)--;
    return 1;
  }
}
int main() {
  int x;
  int arr[] = {1, 2, 3, 4, 5, 6, 6, 7};
  int n = (sizeof(arr) / sizeof(arr[0]));

  printf("enter position to delete");
  scanf("%d", &x);

  int y = DeleteElement(arr, &n, x);
  if (y == -1) {
    printf("error message  the delete position is invalid");
  } else {
    printf("array after delete");
    for (int i = 0; i < n; i++) {
      printf("=%d ", arr[i]);
    }
  }
}