#include <stdio.h>
#include <math.h>

int main() {
    long long m, n;
    int count = 0;

    // Input
    scanf("%lld %lld", &m, &n);

    // Output
    for (long long i = ceil(sqrt(m)); i * i <= n; i++) {
        count++;
    }

    // Print the count of square numbers
    printf("%d\n", count);

    // List the square numbers
    for (long long i = ceil(sqrt(m)); i * i <= n; i++) {
        printf("%lld\n", i * i);
    }

    return 0;
}
