#include <stdio.h>


int check_decrease(unsigned long long int n){
    int current = 9;
    int digit;
    while (n > 0){
        digit = n % 10;
        if (digit <= current){
            current = digit;
        } else if (digit > current) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    unsigned long long int n;
    while (t--){
        scanf("%llu", &n);
        if (check_decrease(n)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
