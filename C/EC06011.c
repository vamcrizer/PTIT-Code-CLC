#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* str, int len) {
  int i;
  for (i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
}

char* subtractBigIntegers(char* a, char* b) {

  int len1 = strlen(a);
  int len2 = strlen(b);
  reverse(a, len1);
  reverse(b, len2);

  char* res = (char*) malloc(sizeof(char) * (len1 + 2));

  int borrow = 0;

  int i, diff;
  for (i = 0; i < len1 || i < len2; i++) {
    int digit1 = i < len1 ? a[i] - '0' : 0;
    int digit2 = i < len2 ? b[i] - '0' : 0;

    diff = digit1 - digit2 - borrow;
    if (diff < 0) {
      diff += 10;
      borrow = 1;
    } else {
      borrow = 0;
    }
    res[i] = (diff + '0');
  }

  res[i] = '\0';

  reverse(res, i);


  // Nếu borrow vẫn bằng 1, thì kết quả là 0
  if (borrow) {
    return "0";
  }

  return res;
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--){
    char a[1000];
    char b[1000];

    scanf("%s %s", a, b);

    char* diff;
    if (strcmp(a, b) >= 0 && strlen(a) == strlen(b)){
        diff = subtractBigIntegers(a, b);
    } else if (strcmp(a, b) < 0 && strlen(a) == strlen(b)) {
        diff = subtractBigIntegers(b, a);
    } else {
        diff = subtractBigIntegers(a, b);
    }
  
    if (diff[0] == '0'){
        for (int i = 1; i < strlen(diff); i++){
            printf("%c", diff[i]);
        }
    } else {
        printf("%s", diff);
    }
    printf("\n");
  }
  return 0;
}
