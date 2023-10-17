#include <stdio.h>


int main() {
    int m, n;
    unsigned int arr_first[1000];
    unsigned int arr_second[1000];
    int arr_result[1000];
    int count = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++){
        scanf("%d", &arr_first[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &arr_second[i]);
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr_first[i] == arr_second[j]){
                arr_result[count] = arr_first[i];
                count++;
                break;
            }
        }
    }
    for (int i = 0; i < count; i++){
        for(int j = i + 1; j < count; j++){
            if (arr_result[i] > arr_result[j]){
                int temp = arr_result[i];
                arr_result[i] = arr_result[j];
                arr_result[j] = temp;
            }
        }
    }
    for (int i = 1; i <= count; i++){
        if (arr_result[i] != arr_result[i - 1]){
            printf("%d ", arr_result[i - 1]);
        }
    }
    return 0;
}
