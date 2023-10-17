#include<stdio.h>
#include <stdbool.h>
#include <math.h>

int gcd(int a, int b){
    if (b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }       
}

int main() {
    int n;
    scanf("%d", &n);
    int a, b;
    for (int i = 0; i < n; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d\n",gcd(a, b));
    }
}
