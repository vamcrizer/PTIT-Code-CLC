#include <stdio.h>
#include <stdlib.h>


int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int dem = 1;
        int count = 0;
        int res = 0;
        int b[n];
        for (int i = 1; i < n; i++){
            if (arr[i] > arr[i - 1]){
                ++dem;
            } else {
                dem = 1;
            }
            if (dem > res){
                res = dem;
                b[0] = i - res + 1; 
                count = 1;
            } else if (dem == res){
                b[count] = i - res + 1;
                ++count;
            }
        }
        printf("Test %d:\n", i);
        printf("%d\n", res);
        
        for (int i = 0; i < count; i++){
            for (int j = 0; j < res; j++){
                printf("%d ", arr[b[i] + j]);
                }
            printf("\n");
            }
            
    }
    return 0;
}