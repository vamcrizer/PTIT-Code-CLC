#include <stdio.h>

long long int maxSubArraySum(long long int arr[], int size) {
    long long int max_ending_here = arr[0];
    long long int max_so_far = arr[0];
    
    for (int i = 1; i < size; i++) {
        max_ending_here = (arr[i] > (max_ending_here + arr[i])) ? arr[i] : (max_ending_here + arr[i]);
        max_so_far = (max_so_far > max_ending_here) ? max_so_far : max_ending_here;
    }
    
    return max_so_far;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        long long int A[N];

        for (int i = 0; i < N; i++) {
            scanf("%lld", &A[i]);
        }

        long long int result = maxSubArraySum(A, N);
        printf("%lld\n", result);
    }

    return 0;
}
