#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[1000];
    int arr_copy[1000];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        arr_copy[i] = arr[i];
    }
    for (int i = 0; i < n; i++){
        int mark = 0;
        int count = 0;
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]){
                count++;
            }
        }
         for (int z = i - 1; z >= 0; z--){
            if (arr[i] == arr[z]){
                mark = 1;
            }
         }
         if (mark == 0){
         printf("%d %d\n", arr[i], count);
         }
        } 
    }
