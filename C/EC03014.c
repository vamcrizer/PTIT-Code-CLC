#include <stdio.h>
#include <math.h>

int check_even(unsigned long long int n){
    int digit;
    while (n > 0){
    digit = n % 10;
    if (digit & 1){
        return 0;
    }
    n /= 10;
    }
    return 1;
}

int main() {
    int t;
    unsigned long long int n;
    scanf("%d", &t);
    while (t--){
        scanf("%llu", &n);
        if (check_even(n)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
        }
    return 0;
}
