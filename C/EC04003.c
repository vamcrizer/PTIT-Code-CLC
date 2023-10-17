#include <stdio.h>
#include <stdbool.h>



int main() {

  int t;
  int n;
  scanf("%d", &t);
  int arr[100];
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
      }
    int maxValue = arr[0];
    for (int j = 0; j < n; j++){
      if (arr[j] > maxValue){
        maxValue = arr[j];
      }
    }
    printf("%d\n", maxValue);
    for (int i = 0; i < n; i++){
      if (arr[i] == maxValue){
        printf("%d ", i);
      }
    }
    printf("\n");
  }
  return 0;
}
