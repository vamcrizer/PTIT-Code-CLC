#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char c[20];
    char s[20];
    scanf("%s", c);
    scanf("%s", s);
    
    unsigned long long int minimum = 0;
    for (int i = 0; i < strlen(c); i++){
      if (c[i] == '6'){
        c[i] = '5';
      }
    }
    for (int i = 0; i < strlen(s); i++){
      if (s[i] == '6'){
        s[i] = '5';
      }
    }
    minimum += strtoull(s, NULL, 10) + strtoull(c, NULL, 10);
    printf("%llu ", minimum);

    unsigned long long int maximum = 0;
    for (int i = 0; i < strlen(c); i++){
      if (c[i] == '5'){
        c[i] = '6';
      }
    }
    for (int i = 0; i < strlen(s); i++){
      if (s[i] == '5'){
        s[i] = '6';
      }
    }
    maximum += strtoull(s, NULL, 10) + strtoull(c, NULL, 10);
    printf("%llu", maximum);
    printf("\n");
    }
  return 0;
}
