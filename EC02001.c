#include <stdio.h>
#include <stdbool.h>
#include <math.h>

    
int main() {
    int n;
    scanf("%d", &n);    
    int sum = 0;
    int num;
    for (int i = 0; i < n; i++){
        sum = 0;
        scanf("%d", &num);
        while (num > 0){
            sum += num % 10;
            num /= 10;
        }
        printf("%d\n", sum);
    }
  }
