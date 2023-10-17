#include<stdio.h>

int main() {
    long long arr[1000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        double result;
        result = (double)1/(double)arr[i];
        printf("%.15lf\n", result);
    }
}
