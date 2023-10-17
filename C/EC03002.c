#include <stdio.h>
#include <math.h>

int check_prime(int num){
  for (int i = 2; i <= sqrt(num); i++){
    if (num % i == 0){
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 2; i < n; i++){
    if (check_prime(i)){
      printf("%d\n", i);
    }
  }
}
