#include <stdio.h>
#include <string.h>

int findPosition(char *a, char *b) {
    char *ptr = strstr(a, b);
    if (ptr != NULL) {
        return ptr - a;
    }
    return -1;
}

void removeExtraSpaces(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[101];
    char str_to_find[101];
    scanf(" %100[^\n]s", str);
    scanf(" %100[^\n]s", str_to_find);
    int pos = findPosition(str, str_to_find);

    while (pos != -1) {
        int word_length = strlen(str_to_find);
        for (int i = pos; i < strlen(str) - word_length; i++) {
            str[i] = str[i + word_length];
        }
        str[strlen(str) - word_length] = '\0';
        removeExtraSpaces(str);  // Remove extra spaces
        pos = findPosition(str, str_to_find);
    }

    printf("%s\n", str);
    return 0;
}
