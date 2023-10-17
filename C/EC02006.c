#include <stdio.h>
#include <string.h>

int main() {  
    int prod = 1;
    int num;
    scanf("%d", &num);
    while (num > 0){
        prod *= num % 10;
        num /= 10;
    }
    printf("%d", prod);
    }
