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
    int col1, col2;
    scanf("%d%d", &col1, &col2);
    for (int i = 0; i < m; i++) {
    	int temp = table[i][col1 - 1];
        table[i][col1 - 1] = table[i][col2 - 1];
        table[i][col2 - 1] = temp;
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    
}
