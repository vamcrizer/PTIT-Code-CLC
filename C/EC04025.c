#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[200];
  for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  int key;
  int smallest = __INT_MAX__;
  for (int i = 0; i < n; i++){
    int sum = 0;
    for (int j = 0; j < n; j++){
      sum += fabs(arr[i] - arr[j]);
    }
    if (sum < smallest){
      smallest = sum;
      key = arr[i];
    }
  }
  printf("%d %d", smallest, key);
  return 0;
}