#include <stdio.h>
#include <math.h>

int main() {
  int n;
  int arr[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
        if (arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
  }
  for (int i = 0; i < n; i++){
    printf("%d ", arr[i]);
    }
}
