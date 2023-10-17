#include <stdio.h>
#include <math.h>

int check_perfect(int num){
  int sum = 0;
  for (int i = 1; i < num; i++){
    if (num % i == 0){
      sum += i;
    }
  }
    if (sum == num){
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
      if (check_perfect(i)){
        printf("%d ", i);
        }
      }
    } else if (m > n){
      for (int i = n; i <= m; i++){
        if (check_perfect(i)){
          printf("%d ", i);
        }
      }
    }
  }
  
  
        
      
  
