#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int current_number = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= i; j++) {
                if (j == i) {
                    printf("%d\n", current_number);
                } else {
                    printf("%d ", current_number);
                }
                current_number++;
            }
        } else {
            int temp = current_number + i - 1;
            for (int j = 1; j <= i; j++) {
                if (j == i) {
                    printf("%d\n", temp);
                } else {
                    printf("%d ", temp);
                }
                temp--;
                current_number++;
            }
        }
    }
    return 0;
}
