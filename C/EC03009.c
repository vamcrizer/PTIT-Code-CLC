#include <stdio.h>

int isFibonacci(unsigned long long int num) {
    unsigned long long int a ;
    unsigned long long int b;
    unsigned long long int temp;
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
int main(){
    unsigned long long int t;
    scanf("%llu", &t);
    unsigned long long int n;
    while (t--){
        scanf("%llu", &n);
        if (isFibonacci(n)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

