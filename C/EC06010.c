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

char* addBigIntegers(char* a, char* b) {

  int len1 = strlen(a);
  int len2 = strlen(b);
  reverse(a, len1);
  reverse(b, len2);

  char* res = (char*) malloc(sizeof(char) * (len1 + 2));

  int carry = 0; 

  int i, sum;
  for (i = 0; i < len1 || i < len2; i++) {
    int digit1 = i < len1 ? a[i] - '0' : 0;
    int digit2 = i < len2 ? b[i] - '0' : 0;

    sum = digit1 + digit2 + carry;
    carry = sum / 10;
    res[i] = (sum % 10) + '0';
  }

  if (carry) {
    res[i++] = carry + '0'; 
  }

  res[i] = '\0';

  reverse(res, i);

  return res;
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--){
    char a[500];
    char b[500];

    scanf("%s %s", a, b);

    char* sum = addBigIntegers(a, b);

    printf("%s\n", sum);
  }

  return 0;
}
