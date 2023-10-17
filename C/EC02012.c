#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char str[1000];
    scanf(" %[^\n]s", str);
    int index = strlen(str);
    char temp = str[0];
    str[0] = str[index - 1];
    str[index - 1] = temp;
    int value = atoi(str);
    printf("%d", value);
    return 0;
}
