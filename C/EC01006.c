#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double solve(double a, double b){
    double x = (float)((0-b)/a);
    return x;
    }
int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    double x = solve(a, b);
    if (isinf(x)){
        printf("No solution");
    } else if (isnan(x)){
        printf("Infinite solutions");
    } else {
        printf("%.2f", x);
    }
}

