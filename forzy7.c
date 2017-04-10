#include <stdio.h>

int main(void)
{
    int x, y;

    for(x = 2; x <= 100; x++)
    {
        for(y = 2; y <= x - 1; y++)
        {
            if (x % y == 0)
            {
                break;
            }
        }
        if (x == y)
        {
            printf("%d\n",x);
        }
    }
    
    return 0;

}

