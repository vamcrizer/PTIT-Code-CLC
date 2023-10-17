#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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

int check_palindrome(int number){
    int reverse = 0, du;
    int so = number;
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

int checktendiv(int n){
    int sum = 0;
    int digit;
    while (n > 0){
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    if (sum % 10 == 0){
        return 1;
    } else {
        return 0;
    }
}


int main() {
    int t;
    int n;
    scanf("%d", &t);
    while (t--){
        int count = 0;
        scanf("%d", &n);
        int start = pow(10,n)/10;
        int end = pow(10,n);
            for (int i = start; i < end; i++){
                if (check_palindrome(i) && checktendiv(i)){
                    count++;
                }
            }
        printf("%d\n", count);
        }
}

