#include <stdio.h>

int main(void)
{
    int x = 123456;
    int i;

    printf("%d\n", x);

    for(i = 1; i <= 6; i++)
    {
        printf("%d", x % 10);
        x = x / 10;
    }
    printf("\n");

    return 0;

}

