#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

   /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
int cmp(const void * a, const void * b) {
    char * x = (char *) a;
    char * y = (char *) b;
    return strcmp(x, y);
}

int main() {
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */

    char c1[1000];
    char c2[1000];
    char a[100][100];
    char b[100][100];
    gets(c1);
    gets(c2);
    int n = 0;
    int m = 0;
    char * token = strtok(c1, " ");
    while (token != NULL) {
        strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }
    token = strtok(c2, " ");
    while (token != NULL) {
        strcpy(b[m++], token);
        token = strtok(NULL, " ");
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for (int i = 0; i < n; i++){
        while (strcmp(a[i], a[i + 1]) == 0){
            i++;
        }
        int mark = 0;
        for (int j = 0; j < m; j++){
            if (strcmp(a[i], b[j]) == 0) {
                mark = 1;
                break;
            }
        }
        if (!mark){
            printf("%s ", a[i]);
        }
    }
    
    return 0;
}
