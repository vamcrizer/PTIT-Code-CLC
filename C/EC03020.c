#include <stdio.h>
#include <math.h>


int check_evenly_ads(unsigned long long int n){
    int digit;
    int even = 0;
    int odd = 0;
    while (n > 0){
        digit = n % 10;
        if (digit & 1){
            odd++;
        } else {
            even++;
        }
        n /= 10;
        }
    if (even > odd){
        return 1;
    } else {
    return 0;
    }
}


int main() {
    int t;
    scanf("%d", &t);
    unsigned long long int n;
    while (t--){
        scanf("%llu", &n);
        if (check_evenly_ads(n)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
