#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}

int countWords(char* str) {

  int count = 0;
  char* token2 = strtok(str, " ");
  
  while (token2 != NULL) {
    count++;
    token2 = strtok(NULL, " ");
  }

  return count;
}

void standardlizename(char* string) {
  char copy[100];
  strcpy(copy, string);
  int count = countWords(copy);
  char* token = strtok(string, " ");
  for (int i = 0; i < count; i++){
    if (i == count - 1){
        strlwr(token);
        printf("%s", token);
        break;
    }
    printf("%c", tolower(token[0]));
    token = strtok(NULL, " ");
  }
    printf("@ptit.edu.vn");
  
}
int main() {

  char name[100];
  scanf(" %[^\n]s", name);

  standardlizename(name);

  return 0;
}
