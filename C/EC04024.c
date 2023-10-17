#include <stdio.h>


int main() {
    int m, n;
    int arr_first[1000];
    int arr_second[1000];
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++){
      scanf("%d", &arr_first[i]);
    }
    for (int i = 0; i < n; i++){
      scanf("%d", &arr_second[i]);
    }
    
    int kount = n;
    for (int i = m; i < m + n; i++){
        arr_first[i] = arr_second[kount - 1];
        kount--;
    }

    for (int i = 0; i < m + n; i++){
      for (int j = i + 1; j < m + n; j++){
        if (arr_first[i] > arr_first[j]){
          int temp = arr_first[i];
          arr_first[i] = arr_first[j];
          arr_first[j] = temp;
        }
      }
    }

    for (int i = 1; i <= m + n; i++){
      if (arr_first[i] != arr_first[i - 1]){
        printf("%d ", arr_first[i - 1]);
      }
      
    }
    return 0;
}
