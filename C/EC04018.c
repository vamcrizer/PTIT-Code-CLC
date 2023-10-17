#include <stdio.h>

void insertionSort(int arr[], int n){
  int i, key, j;
  for (int i = 1; i < n; i++){
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key){
      arr[j + 1] = arr[j];
      j -= 1;
    }
    arr[j + 1] = key;
  printf("Step %d: ", i);
  for(int k = 0; k <= i; k++) {
    printf("%d ", arr[k]);
  }
    printf("\n");
  }
}


int main() {
  int n;
  int arr[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  printf("Step 0: %d\n", arr[0]);
  insertionSort(arr, n);
}
