// Code này đã được tham khảo

#include <stdio.h>
#include <string.h>

void removeduplicate(char *string) {
    char strng[1000];
    strcpy(strng, string);

    char result[1000] = "";
    char *words[1000] = {0};
    int word_count = 0;

    char *token = strtok(strng, " ");
    while (token != NULL) {
        int is_duplicate = 0;
        for (int i = 0; i < word_count; i++) {
            if (strcmp(token, words[i]) == 0) {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate) {
            if (strlen(result) > 0) {
                strcat(result, " ");
            }
            strcat(result, token);
            words[word_count] = token;
            word_count++;
        }

        token = strtok(NULL, " ");
    }

    printf("%s", result);
}

int main() {
    char input[1000];
    scanf(" %[^\n]s", input);
    removeduplicate(input);
    return 0;
}
