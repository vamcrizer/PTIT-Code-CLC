#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int len;
    scanf("%i", &len);
    int comp[len];
    for (int i = 0; i < len; i++)
    {
        int num;
        scanf("%i", &num);
        comp[i] = num;
    }

    int step = 1;
    for (int i = 0; i < len; i++)
    {
        int small = comp[i], index;
        int change = 0;
        for (int j = i+1; j < len; j++)
        {
            if (comp[j] < small)
            {
                small = comp[j];
                index = j;
            int tmp = comp[index];
            comp[index] = comp[i];
            comp[i] = tmp;
            change = 1;
            }
        }
        if (change == 1)
        {
            printf("Step %i: ", step);
            for (int i = 0; i < len; i++)
            {
                printf("%i ", comp[i]);
            }
            printf("\n");
            step++;
        }
    }
    
}
