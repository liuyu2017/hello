#include <stdio.h>

int main (void)
{
    int a[9] = {4, 7, 3, 9, 8, 1, 5, 2, 6};
    int i, j, x;
    for(i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (a[j] > a[j + 1])
            {
                x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;

            }
        }
    }

    for(i = 0; i < 9; i++)
    {
        printf("a[%d] = %d | ", i, a[i]);
    }
    printf("\n");


    return 0;

}
