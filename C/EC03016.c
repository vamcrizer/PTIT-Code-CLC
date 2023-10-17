#include <stdio.h>
#include <stdbool.h>

int gcd(int a, int b){
  if (b == 0){
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int main() {

  int t;
  scanf("%d", &t);
  int arr[100];
  while (t--) {
    for (int i = 0; i < 4; i++){
      scanf("%d", &arr[i]);
    }
    if (gcd(arr[0], arr[1]) == gcd(arr[2], arr[3])){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
