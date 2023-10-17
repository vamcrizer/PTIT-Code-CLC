#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
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

void spiralMatrix(int rows, int cols) {
    int matrix[rows][cols];
    
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            while (!isPrime(num)) {
                num++;
            }
            matrix[top][i] = num;
            num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            while (!isPrime(num)) {
                num++;
            }
            matrix[i][right] = num;
            num++;
        }
        right--;

        for (int i = right; i >= left; i--) {
            while (!isPrime(num)) {
                num++;
            }
            matrix[bottom][i] = num;
            num++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            while (!isPrime(num)) {
                num++;
            }
            matrix[i][left] = num;
            num++;
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
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++){
        int n;
        scanf("%d", &n);
        int rows = n;
        int cols = n;
        printf("Test %d:\n", j);
        spiralMatrix(rows, cols);
    }
    return 0;
}
