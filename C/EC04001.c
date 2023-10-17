#include <stdio.h>
#include <math.h>

int check_prime(int number) {
    if (number < 2){
      return 0;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
      int arr[100] = {};
      int m;
      scanf("%d", &m);
      for (int i = 0; i < m; i++){
        scanf("%d", &arr[i]);
      }
      for (int i = 0; i < m; i++){
        if (check_prime(arr[i])){
          printf("%d ", arr[i]);
          }
        }
      printf("\n");
      }
      
  }
