#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int k;
    scanf("%d", &k);
    while (k--){
      scanf("%d", &n);
      long long int a = 0;
      long long int b = 1;
      for (int i = 0; i < n; i++){
        long long int temp = a;
        a = b;
        b = temp + b;
      }
      printf("%llu\n", a);
    }
}
