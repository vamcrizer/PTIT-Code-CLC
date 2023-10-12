#include<stdio.h>

int doubleofnumber(int a){
    return a * 2;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d",doubleofnumber(a));
    return 0;
}
