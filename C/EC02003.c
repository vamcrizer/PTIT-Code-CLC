#include<stdio.h>
#include <stdbool.h>
#include <math.h>

bool checksquare(int num){
    if (num < 2){
        return false;
    }
    for (int i = 2; i < sqrt(num); i++){
        if (num % i == 0){
            return false;
        } 
    }
    return true;
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
