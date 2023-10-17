// Bài này khó, có thể bỏ qua.

#include <stdio.h>
#include <math.h>

int main(){
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    int arr[n][m];
    int arr2[m][p];
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
      		scanf("%d", &arr[i][j]);
    	}
    }
    for (int i = 0; i < m; i++) {
    	for (int j = 0; j < p; j++) {
      		scanf("%d", &arr2[i][j]);
    	}
    }
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            int sum = 0;
            for (int k = 0; k < m; k++) {
                sum += arr[i][k] * arr2[k][j];
            }
        printf("%d ", sum); 
        }
    printf("\n");
    }
    return 0;    
}
