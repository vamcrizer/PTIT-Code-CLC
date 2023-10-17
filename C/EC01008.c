#include<stdio.h>
#include <stdbool.h>

bool checksquare(int num){
    for (int i = 1; i < num; i++){
        if (i * i == num){
            return true;
        } 
    }
    return false;
}

int main() {
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        if (checksquare(arr[i])){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
