#include <stdio.h>
#include <stdlib.h>

// Function to convert decimal to any base
void decToBase(int num, int base) {
  
  char remStack[100]; 
  int top = -1;
  
  while (num > 0) {
    int rem = num % base;
    if (rem >= 10) {
      remStack[++top] = (rem-10) + 'A'; 
    }
    else {
      remStack[++top] = rem + '0';
    }
    num = num/base;
  }
  
  while (top >= 0) {
    printf("%c", remStack[top--]); 
  }
}

int main() {

  int t;
  scanf("%d", &t);
  
  while(t--) {
    int num;
    int base;
    scanf("%d %d", &num, &base);
    
    decToBase(num, base);
    printf("\n"); 
  }
  
  return 0;
}
