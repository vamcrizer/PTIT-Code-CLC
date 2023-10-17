#include <stdio.h>
#include <math.h>

int factorial(int num){
  int fac = 1;
  for (int i = 1; i <= num; i++){
    fac *= i;
  }
  return fac;
}
int check_factorial_digit(int num){
  int sum = 0;
  int based_num = num;
  while (num > 0){
    int digit = num % 10;
    sum += factorial(digit);
    num /= 10;
  }
  if (sum == based_num){
    return 1;
  } else {
    return 0;
  }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    if (n > m){
    for (int i = m; i <= n; i++){
      if (check_factorial_digit(i)){
        printf("%d ", i);
        }
      }
    } else if (m > n){
      for (int i = n; i <= m; i++){
        if (check_factorial_digit(i)){
          printf("%d ", i);
        }
      }
    }
  }
  
  
        
      
  
