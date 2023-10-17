#include <stdio.h>

int gcd(int a, int b){
    if (b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(){
    int m,n;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            if (gcd(i,j) == 1){
                printf("(%d,%d)\n", i, j);
            }
        }
    }
}
