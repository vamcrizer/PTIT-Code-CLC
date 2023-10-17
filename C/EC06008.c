// Code này đã đươc tham khảo

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void standardlizename(char *string) {
    char strng[1000];
    strcpy(strng, string);

    char result[1000] = "";
    char *token = strtok(strng, " ");

    while (token != NULL) {
        char *word = token;
        for (int i = 0; word[i]; i++) {
            word[i] = tolower(word[i]);
        }
        if (word[0] >= 'a' && word[0] <= 'z') {
            word[0] = toupper(word[0]);
        }
        strcat(result, word);
        strcat(result, " ");
        token = strtok(NULL, " ");
    }

    printf("%s\n", result);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--){
        char input[1000];
        scanf(" %[^\n]s", input);
        standardlizename(input);
    }
    return 0;
}
