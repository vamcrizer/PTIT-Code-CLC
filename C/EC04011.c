#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int k;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (int i = n - k; i < n; i++){
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - k; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
