#include <stdio.h>
#include <stdbool.h>

bool checkprime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int isFibonacci(int num) {
    int a ;
    int b;
    int temp;
    a = 0;
    b = 1;
    if (num == 0){
        return 1;
    }
    while (b < num) {
        temp = a;
        a = b;
        b = temp + b;
    }
    if (b == num){
        return 1;
    } else {
        return 0;
    }
}

int checkfibonsum(int n){
    int sum = 0;
    int digit;
    while (n > 0){
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    if (isFibonacci(sum)){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (b > a){
        for (int i = a; i <= b; i++){
            if (checkfibonsum(i) && checkprime(i)){
                printf("%d ", i);
            }
        }
    } else {
        for (int i = b; i <= a; i++){
            if (checkfibonsum(i) && checkprime(i)){
                printf("%d ", i);
            }
        }
    }
}
