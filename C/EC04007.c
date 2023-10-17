#include <stdio.h>
#include <string.h>


int main() {
    int n;
    int arr[100];
    int new_arr[100];
    int fixed_arr[100];
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
      new_arr[i] = arr[i];
    }
    for (int i = 0; i < n; i++){
      int same = 0;
      for (int j = 0; j < n; j++){
        if (new_arr[i] == arr[j] && i != j){
          same = 1;
          break;
        }
      }
      if (same == 0){
        fixed_arr[count] = arr[i];
        count++;
        }
      
    }
    printf("%d\n", count);
    for (int z = 0; z < count; z++){
      printf("%d ", fixed_arr[z]);
    }
    
}
  
        
      
  
