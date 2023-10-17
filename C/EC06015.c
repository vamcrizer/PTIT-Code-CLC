#include <stdio.h>
#include <string.h>

int main(){
    int t;
    char str[101];
    char str2[101];
    scanf("%d", &t);
    while (t--){
        scanf("%s", &str);
        strcpy(str2, str);
        for (int i = 0; i < strlen(str2); i++){
            int count = 0;
            int mark = 0;
            for (int j = 0; j < strlen(str); j++){
                if (str2[i] == str[j]){
                    count++;
                }
            }
            for (int z = i - 1; z >= 0; z--){
                if (str2[i] == str2[z]){
                    mark = 1;
                }
            }
            
            if (mark == 0){
                printf("%c%d", str2[i], count);
                }
            }

            printf("\n");
    }
}

