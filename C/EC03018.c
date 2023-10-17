#include <stdio.h>
#include <math.h>

int check_palindrome(long long int number){
  unsigned long long int reverse = 0, du;
  unsigned long long int so = number;
  while (so != 0)
      {
        du = so % 10;
        reverse = reverse * 10 + du;
        so /= 10;
      }
      if (reverse == number){
        return 1;
      } else {
        return 0;
      }
}

unsigned long long int check_odd(long long int num){
  if (num & 1){
    return 1;
  } else {
    return 0;
  }
}

int main() {
    unsigned long long int number;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
      scanf("%llu", &number);
      unsigned long long int sum = 0;
      if (check_palindrome(number)){
        while (number > 0){
          unsigned long long int digit = number % 10;
          if (check_odd(digit)){
            sum += digit;
            }
          number /= 10;
          }
          if (sum != 0 && check_odd(sum)){
            printf("YES\n");
          } else {
            printf("NO\n");
          }
      } else {
        printf("NO\n");
      }
      
    }
    
}
    
  


