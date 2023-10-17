#include <stdio.h>

int main() {
    int m;
    int t;
    scanf("%d", &t);
    int arr[1001];
    while (t--){
        scanf("%d", &m);
        for (int i = 0; i < m; i++){
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < m; i++){
            int temp_big;
            int big = arr[i];
            int biggest = 1;
            for (int j = i + 1; j < m; j++){
                if (arr[j] >= big){
                    biggest = 0;
                    break;
                }
            }
            if (biggest == 1){
                    printf("%d ", arr[i]);
                }
            }
        
        printf("\n");
    }
    return 0;
}
