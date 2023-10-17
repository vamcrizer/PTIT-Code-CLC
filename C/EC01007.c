#include <stdio.h>
#include <math.h>

int main() {

  double a, b, c, discriminant, x1, x2;
  
  scanf("%lf %lf %lf", &a, &b, &c);

  discriminant = b*b - 4*a*c;

  if (discriminant < 0) {
    printf("NO\n");
  }
  else if (discriminant == 0) {
    x1 = -b / (2*a);
    printf("%.2lf\n", x1);
  }
  else {
    x1 = (-b + sqrt(discriminant)) / (2*a);
    x2 = (-b - sqrt(discriminant)) / (2*a);
    if (x1 > x2) {
      printf("%.2lf %.2lf\n", x1, x2);
    } else {
      printf("%.2lf %.2lf\n", x2, x1);  
    }
  }
  
  return 0;
}
