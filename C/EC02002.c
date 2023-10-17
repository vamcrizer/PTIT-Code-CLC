#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int number;
        scanf("%d", &number);
        char c[100];
        snprintf(c, 100, "%d", number);
        int idx = strlen(c);
        if (c[0] == c[idx - 1]){
            printf("YES\n");
        } else {
            printf("NO\n");
            }
        }
}
