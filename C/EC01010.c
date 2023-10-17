// Code này đã được tham khảo

#include <stdio.h>
#include <math.h>
int main() {

  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  
  int a1, b1, a2, b2; 
  scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

  // Find ranges for x and y
  int x_min = fmin(x1, a1);
  int x_max = fmax(x2, a2);
  int y_min = fmin(y1, b1);  
  int y_max = fmax(y2, b2);

  // Side length of smallest square 
  int side = fmax(x_max - x_min, y_max - y_min);

  // Print area
  printf("%d\n", side * side);

  return 0;
}
