#include <stdio.h>
#include <string.h>

int values[] = {1, 5, 10, 50, 100, 500, 1000};
char romanSymbols[] = "IVXLCDM";

int romanToDecimal(char roman[]) {
  
  int total = 0;
  int i = 0;
  
  while (roman[i]) {
  
    char symbol = roman[i];
    int value = values[strchr(romanSymbols, symbol) - romanSymbols];
    
    if (i+1 < strlen(roman) && value < values[strchr(romanSymbols, roman[i+1]) - romanSymbols]) {
      total += values[strchr(romanSymbols, roman[i+1]) - romanSymbols] - value;
      i += 2;
    }
    else {
      total += value;
      i++;
    }
  }
  
  return total;
}

int main() {

  int n;
  scanf("%d", &n);
  
  char roman[100];
  
  for(int i=0; i<n; i++) {
    scanf("%s", roman);
    printf("%d\n", romanToDecimal(roman)); 
  }
  
  return 0;
}
