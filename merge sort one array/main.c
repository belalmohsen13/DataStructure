#include <stdio.h>

void MergeSort(int arr[], int r[], int l[], int nr, int nl) {
  int i = 0, j = 0, k = 0;

  while (i < nl && j < nr) {
    if (l[i] <= r[j]) {
      arr[k] = l[i];
      i++;
    } else {
      arr[k] = r[j];
      j++;
    }
    k++;
  }

  while (i < nl) {
    arr[k] = l[i];
    i++;
    k++;
  }

  while (j < nr) {
    arr[k] = r[j];
    j++;
    k++;
  }
}

void merge(int arr[], int n) {
  if (n < 2) {
    return;
  } else {
    int mid = n / 2;
    int left[mid];
    int right[n - mid];
    for (int i = 0; i < mid; i++) {
      left[i] = arr[i];
    }
    for (int i = mid; i < n; i++) {
      right[i - mid] = arr[i];
    }
    merge(left, mid);
    merge(right, n - mid);
    MergeSort(arr, right, left, n - mid, mid);
  }
}

int main() {
  int arr[] = {12, 11, 13, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  merge(arr, n);
  printf("After sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}
