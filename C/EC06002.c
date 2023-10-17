#include <stdio.h>
#include <string.h>


int main() {
  char str[100];
  int alpha = 0;
  int digit = 0;
  int other = 0;
  fgets(str, 100, stdin);
  for (int i = 0; i < strlen(str); i++){
    if (str[i] >= 'a' && str[i] <= 'z'){
      alpha++;
    } else if (str[i] >= 'A' && str[i] <= 'Z'){
      alpha++;
    } else if (str[i] >= '0' && str[i] <= '9'){
      digit++;
    } else {
      other++;
    }
  }
  printf("%d %d %d", alpha, digit, other - 1);
  
}
