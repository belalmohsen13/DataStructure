#include <stdio.h>

void merge(int arr[], int r[], int l[], int nr, int nl) {
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

int main() {
  int l[] = {1, 4, 6, 9, 15};
  int r[] = {2, 5, 5, 10};
  int nl = sizeof(l) / sizeof(l[0]);
  int nr = sizeof(r) / sizeof(r[0]);
  int n = nl + nr;
  int arr[n];

  printf("merge sort\n");
  merge(arr, r, l, nr, nl);

  for (int i = 0; i < n; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  return 0;
}
