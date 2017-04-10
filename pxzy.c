#include <stdio.h>

int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int j, x;
    for(j = 0; j < 10; j++)
    {
        x = x + a[j];
    }

    printf("%d\n", x);

    return 0;


}
