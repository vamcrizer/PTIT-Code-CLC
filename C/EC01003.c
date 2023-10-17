#include<stdio.h>
#include<math.h>

int calculate(int a, int b) {
    if (b == 0){
        printf("%d", 0);
        return 0;
    }
  int sum = a + b;
  int subtract = a - b;
  int multiply = a * b;
  float div = (float)a / (float)b;
  int remainder = a % b;
  printf("%d ", sum);
  printf("%d ", subtract);
  printf("%d ", multiply);
  printf("%.2f ", div);
  printf("%d", remainder);
}


int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    calculate(a, b);

}
