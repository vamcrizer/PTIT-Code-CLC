#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
      if (arr[i] % 2 == 0){
        printf("%d ", arr[i]);
      }
    }
    printf("\n");
    for (int i = 0; i < n; i++){
      if (arr[i] % 2 != 0){
        printf("%d ", arr[i]);
      }
    }
}
