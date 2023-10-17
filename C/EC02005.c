#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int num;
  for (int i = 0; i < n; i++){
    scanf("%d", &num);
    for (int i = 2; i < num + 1; i++){
        while (num % i == 0){
            printf("%d ", i);
            num /= i;
            }
        }
    printf("\n");
  }
    
  return 0;
}

