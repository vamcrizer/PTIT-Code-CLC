#include <stdio.h>

int main() {
    int n;
    int t;
    scanf("%d", &t);
    for (int l = 1; l <= t; l++){
        scanf("%d", &n);
        int arr[n][n];
        int arr2[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++){
                arr[i][j] = j + 1;
            }
            for (int z = i + 1; z <= n; z++){
                arr[i][z] = 0;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                arr2[j][i] = arr[i][j];
            }
        }
        printf("Test %d:\n", l);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += arr[i][k] * arr2[k][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
            }
        }
    return 0;
}


