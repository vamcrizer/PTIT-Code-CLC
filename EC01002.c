#include<stdio.h>

int doubleofnumber(int a, int b){
    return a + b;
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d",doubleofnumber(a, b));
    return 0;
}