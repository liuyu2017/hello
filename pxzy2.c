#include <stdio.h>

int main(void)
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;

    for (i = 8; i >= 0; i--)
    {
        j = a[i];
        printf("%d", j);
    }
    printf("\n");

    return 0;
}
