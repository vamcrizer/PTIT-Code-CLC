#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int z = 1; z <= t; z++){
        int m,n;
        scanf("%d%d", &m, &n);
        int arr[m][n];
        int arr2[n][m];
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                arr2[i][j] = arr[j][i];
            }
        }
        printf("Test %d:\n", z);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                int sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += arr[i][k] * arr2[k][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
            }
        }
    }
