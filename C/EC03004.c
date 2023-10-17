#include <stdio.h>
#include <math.h>

long long int gcd(long long int a, long long int b){
  if (b == 0){
    return a;
  } else {
    return gcd(b, a % b);
  }
}

long long int lcm(long long int a, long long int b) {
  return a*b/gcd(a, b);
}


int main() {
  unsigned long long int a, b;
  scanf("%llu%llu", &a, &b);
  printf("%llu\n",gcd(a, b));
  printf("%llu", lcm(a, b));


  }
   
    
 
    
      
 
