#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int check_palindrome(unsigned long long int number){
    unsigned long long int reverse = 0, du;
    unsigned long long int so = number;
    while (so != 0){
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

int checksixdiv(unsigned long long int n){
    int sum = 0;
    int digit;
    int mark = 0;
    while (n > 0){
        digit = n % 10;
        sum += digit;
        n /= 10;
        if (digit == 6){
            mark = 1;
        }
    }
    if (sum % 10 == 8 && mark == 1){
        return 1;
    } else {
        return 0;
    }
}


int main() {
    unsigned long long int a, b;
    scanf("%llu%llu", &a, &b);
    if (b > a){
        for (unsigned long long int i = a; i <= b; i++){
            if (check_palindrome(i) && checksixdiv(i)){
                printf("%llu ", i);
            }
        }
    } else {
        for (unsigned long long int i = b; i <= a; i++){
            if (check_palindrome(i) && checksixdiv(i)){
                printf("%llu ", i);
            }
        }
    }
}
