#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        int mark = 0;
        for (int z = i - 1; z >= 0; z--){
            if (arr[i] == arr[z]){
            mark = 1;
            break;
            }
        }
        if (mark == 0){
            printf("%d ", arr[i]);
            }       
        }  
    }
