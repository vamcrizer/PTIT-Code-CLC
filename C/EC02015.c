#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int count = 0;
        for (int i = 1; i * i <= N; i++) {
            if (N % i == 0) {
                if (i % 2 == 0) {
                    count++;
                }
                if (i != N / i) {
                    if ((N / i) % 2 == 0) {
                        count++;
                    }
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
