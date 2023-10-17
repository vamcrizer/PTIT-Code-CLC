#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int arr[], int n) {
  for (int i = 0; i < n/2; i++) {
    if (arr[i] != arr[n-i-1]) {
      return false; 
    }
  }
  return true;
}

int main() {

  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    
    if (isPalindrome(arr, n)) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }

  return 0;
}
