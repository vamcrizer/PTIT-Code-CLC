#include <stdio.h>
#include <string.h>

char split(char num){
  if (num != '0' && num != '9' && num != '8' && num != '1'){
    return 0;
  }
  switch (num){
    case '0':
      return '0';
    case '8':
      return '0';
    case '9':
      return '0';
    case '1':
      return '1';
  }
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
      char c[20];
      char s[20];
      unsigned long long int sum = 0;
      int mark = 0;
      scanf("%s", c);
      for (int i = 0; i < strlen(c); i++){
        if (!split(c[i])){
          mark = 1;
          break;
        } else {
          if (split(c[i]) != '0'){
            sum = sum * 10 + (split(c[i]) - '0');
          }
          if (split(c[i]) == '0' && sum > 0){
            sum *= 10;
          }
        }
      }
      if (!mark && sum != 0){
          printf("%llu\n", sum);
      } else {
        printf("INVALID\n");
      }
    }
  }
