#include <stdio.h>
#include <math.h>


int main() {
  int n;
  int number;
  int digit;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%d", &number);
    int sum = 0;
    while (number > 0){
      digit = number % 10;
      sum += digit;
      number /= 10;
    }
    if (sum % 10 == 0){
      printf("YES\n");
    } else {
      printf("NO\n");
      }
  }
}
