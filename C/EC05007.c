// Code này đã được tham khảo.
#include <stdio.h>

void spiralMatrix(int rows, int cols) {
    int matrix[rows][cols];
    
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int rows = n;
    int cols = n;

    spiralMatrix(rows, cols);

    return 0;
}
