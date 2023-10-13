#include <stdio.h>
#include <stdlib.h>

int compare_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int compare_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);

        int A[N], B[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }

        qsort(A, N, sizeof(int), compare_asc);
        
        // Sắp xếp mảng B giảm dần
        qsort(B, N, sizeof(int), compare_desc);

        int result[2 * N];
        for (int i = 0; i < N; i++) {
            result[2 * i] = A[i];
            result[2 * i + 1] = B[i];
        }

        printf("Test %d:\n", t);
        for (int i = 0; i < 2 * N; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}
