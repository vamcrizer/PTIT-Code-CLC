#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_pretty(char* num) {
  int n = strlen(num);
  
  for (int i = 0; i < n/2; i++) {
    if (num[i] != num[n-i-1]) {
      return false;
    }
    
    if ((num[i] - '0') % 2 != 0) {
      return false;
    }
  }
  
  return true;
}

int main() {
  int t;
  scanf("%d", &t);
  
  while (t--) {
    char num[501];
    scanf("%s", num);
    
    if (is_pretty(num)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  
  return 0;
}