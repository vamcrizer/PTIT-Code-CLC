#include<stdio.h>

int main() {
    long long arr[1000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        unsigned long long square;
        square = arr[i] * arr[i];
        printf("%llu\n", square);
    }

}
