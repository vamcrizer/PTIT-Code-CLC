#include <stdio.h>
#include <math.h>

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
int check_prime_digit(int number){
    int prime_value = 1;
        while (number > 0){
            int digit = number % 10;
            if (check_prime(digit) == 0){
                prime_value = 0;
                break;
            }
            number /= 10;
        }
    return prime_value;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    int a, b;
    scanf("%d%d", &a, &b);
    int count = 0;
    for (int i = a; i <= b; i++){
        if (check_prime(i)){
            if (check_prime_digit(i) == 1){
                count++;
                }
            }
        }
        printf("%d\n", count);
    }
}

  
 



    

