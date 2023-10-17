#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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

unsigned long long int PrimeFactor(unsigned long long int n) {
    unsigned long long int largestPrime = -1;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0 && checkprime(i)) {
            largestPrime = i;
        }
        while (n % i == 0) {
            n /= i;
        }
    }

    if (n > 1) {
        largestPrime = n;
    }

    return largestPrime;
}

int main() {
    unsigned long long int n;
    int t;
    scanf("%d", &t);
    while(t--){
      scanf("%llu", &n);
      unsigned long long int result = PrimeFactor(n);

      if (result != -1) {
          printf("%llu\n", result);
        }
      }
    return 0;
}
