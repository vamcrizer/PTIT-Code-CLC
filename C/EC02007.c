#include <stdio.h>
#include <string.h>

    
int main() {  
    int n;
    scanf("%d", &n);
    int odd = 0;
    int even = 0;
    int num;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        odd = 0;
        even = 0;
        while (num > 0){
            int num_check = num % 10;
            if (num_check & 1){
                odd++;
            } else {
                even++;
            }
            num /= 10;
        }
        printf("%d %d\n", odd, even);
        }   
}
