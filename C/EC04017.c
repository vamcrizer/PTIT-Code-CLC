#include <stdio.h>
#include <math.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Đổi chỗ phần tử nhỏ nhất với phần tử đầu danh sách chưa sắp xếp
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        printf("Step %d: ", i + 1);
        for (int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);
    return 0;
}
