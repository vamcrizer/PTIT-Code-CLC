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
int check_nine(int n){
    int digit;
    while (n > 0){
    digit = n % 10;
    if (digit == 9){
        return 0;
        }
    n /= 10;
    }
    return 1;
}


int main() {
    int n;
    scanf("%d", &n);
    int i = 2;
    int count = 0;
    while (i < n){
        if (check_nine(i) && check_palindrome(i)){
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\n");
    printf("%d", count);
    return 0;
}
