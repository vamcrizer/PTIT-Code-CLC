#include <stdio.h>
#include <math.h>

int palindrome(int num){
  int based_num = num;
  int reverse = 0;
  int du;
  while (num > 0){
    du = num % 10;
    reverse = reverse * 10 + du;
    num /= 10;
  }
  if (reverse == based_num){
    return 1;
  } else {
    return 0;
  }
}
int check_prime(int num){
  if (num < 2){
    return 0;
  }
  for (int i = 2; i <= sqrt(num); i++){
    if (num % i == 0){
      return 0;
    }
  }
  return 1;
}


int main() {
    int k;
    scanf("%d", &k);
    int n, m;
    while (k--){
      int count = 0;
      scanf("%d %d", &n, &m);
      if (m > n){
      for (int i = n; i <= m; i++){
        if (check_prime(i) && palindrome(i)){
          count++;
          if (count > 10){
            printf("\n");
            count = 0;
            count++;
          }
            printf("%d ", i);
            }
          }
      } else {
        for (int i = m; i <= n; i++){
        if (check_prime(i) && palindrome(i)){
          count++;
          if (count > 10){
            printf("\n");
            count = 0;
            count++;
          } 
          printf("%d ", i);
            }
        }
      }
      if (k > 0){
          printf("\n");
          printf("\n");
          }
      }
  }
