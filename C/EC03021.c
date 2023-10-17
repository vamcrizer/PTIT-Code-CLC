#include <stdio.h>
#include <math.h>

int check_palindrome(int number){
  int reverse = 0, du;
  int so = number;
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
int check_four_and_10_divide(unsigned long long int n){
    int digit;
    int sum = 0;
    while (n > 0){
    digit = n % 10;
    sum += digit;
    if (digit == 4){
        return 0;
        }
    n /= 10;
    }
    if (sum % 10 != 0){
        return 0;
    }
    return 1;
}

int main() {
    int t;
    unsigned long long int n;
    scanf("%d", &t);
    while (t--){
        scanf("%llu", &n);
        for (unsigned long long int i = pow(10, n) / 10; i < pow(10, n); i++)
            if (check_four_and_10_divide(i) && check_palindrome(i)){
                printf("%llu ", i);
            }
        printf("\n");
        }
    return 0;
}
