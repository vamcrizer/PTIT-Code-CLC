#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

int check_decrease_digit(int n){
    if (n % 10 == 0){
        return 0;
    }
    int digit;
    int max = n % 10;
    while (n > 0){
        digit = n % 10;
        if (digit > max){
            return 0;
        }
        max = digit;
        n /= 10;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    int n;
    while (t--){
        scanf("%d", &n);
        int lower = pow(10, n - 1);  // Giới hạn dưới
        int upper = pow(10, n);
        for (int i = lower; i < upper; i++){
            if (check_decrease_digit(i)){
                printf("%d ", i);
            } else {
                continue;
            }
        }
        printf("\n");
        }
    }

