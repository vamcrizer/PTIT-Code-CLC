#include <stdio.h>
#include <math.h>

int factorial(int num){
  int factorial = 1;
  for (int i = 1; i <= num; i++){
    factorial *= i;
  }
  return factorial;
}

int main() {
  int based_number;
  int digit;
  int sum = 0;
  scanf("%d", &based_number);
  int number = based_number;
  while (number > 0){
    digit = number % 10;
    sum += factorial(digit);
    number /= 10;
  }
  if (sum == based_number){
    printf("%d", 1);
  } else {
    printf("%d", 0);
  }
}
