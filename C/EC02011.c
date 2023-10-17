#include <stdio.h>
#include <string.h>

    
int main() {  
    int sum = 0;
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < b){
        for (int i = a; i <= b; i++){
            sum += i;
            }
    } else {
        for (int i = b; i <= a; i++){
            sum += i;
        }
    }
    printf("%d", sum);
    
}
