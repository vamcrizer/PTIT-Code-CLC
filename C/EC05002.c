#include <stdio.h>
#include <math.h>

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    int table[m][n];
    int count_one_row = 0;
    for (int i = 0; i < m; i++) {
    	for (int j = 0; j < n; j++) {
      		scanf("%d", &table[i][j]);
    	}
    }
    int row1, row2;
    scanf("%d%d", &row1, &row2);
    for (int i = 0; i < n; i++){
        int temp = table[row1 - 1][i];
        table[row1 - 1][i] = table[row2 - 1][i];
        table[row2 - 1][i] = temp;

    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    
}
