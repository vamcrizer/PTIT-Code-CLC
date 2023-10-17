#include <stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    int table[m][3];
    int count_one_row = 0;
    for (int i = 0; i < m; i++) {
    	for (int j = 0; j < 3; j++) {
      		scanf("%d", &table[i][j]);
    	}
    }
    for (int i = 0; i < m; i++) {
        int count_one = 0;
        int count_zero = 0;
    	for (int j = 0; j < 3; j++) {
            if (table[i][j] == 1){
                count_one++;
            } else if (table[i][j] == 0){
                count_zero++;
                }
    	}
        if (count_one > count_zero){
                count_one_row++;
            }
    }
    printf("%d", count_one_row);
	return 0;
}
