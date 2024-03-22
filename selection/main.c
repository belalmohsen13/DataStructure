#include <stdio.h>

void SelectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini])
        mini = j;
    }
    int temp = arr[i];
    arr[i] = arr[mini];
    arr[mini] = temp;
  }
}
int main() {
  int arr[] = {1, 4, 6, 7, 2, 3, 9};
  printf("selection sort");
  SelectionSort(arr, 7);
  for (int i = 0; i <= 6; i++) {
    printf("arr[%d]:%d\n", i, arr[i]);
  }
}