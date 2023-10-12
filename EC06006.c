#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_pretty(char* num) {
  int n = strlen(num);
  
  if (num[n-1] != '8'){
    return false;
  }
  int sum = 0;
  for (int i = 0; i < n; i++){
    sum += (num[i] - '0');
  }
  if (sum % 10 != 0){
    return false;
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