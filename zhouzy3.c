#include <stdio.h>
#include <math.h>

int mian(void)
{
    int x = 456;
    int y = 0;
    int z = 0;

    while(x % 10 > 0)
    {
       y++;
       x = x / 10;
    }
    printf("%d\n", y);
    return 0;
}
