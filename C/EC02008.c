#include <stdio.h>
#include <stdbool.h>

bool checkprime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    int n;
    while (t--){
        int factor = 1;
        scanf("%d", &n);
        if (!checkprime(n)){
            int i = 2;
            while (n > 1) { 
                if (n % i == 0){
                    factor *= i;
                    while (n % i == 0){
                        n /= i;
                        }
                }
                i++;
            }
            printf("%d\n", factor);
        } else {
            printf("%d\n", n);
            }
        }
    return 0;
}
