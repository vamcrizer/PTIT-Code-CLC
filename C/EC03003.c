#include <stdio.h>
#include <math.h>

int main() {
  int n;
  scanf("%d", &n);
  int count = 0;
  int num = 2;

  while(count < n) {
    int i;
    int isPrime = 1;


    for(i = 2; i <= sqrt(num); i++) {
      if(num % i == 0) {
        isPrime = 0;
        break;
      }
    }

    if(isPrime == 1) {
      printf("%d\n", num);
      count++;
    }
    num++; 
  }
  return 0;
}
