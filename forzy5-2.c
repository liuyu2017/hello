#include <stdio.h>

int main (void)
{
    int x = 12;
    int a, b;
    int sum;
    printf("%d\n", x);


    for(a = 1; a < 10; a++)
    {
        sum = x / 10;
        if(a = sum)
        {
            break;
        }
        else
        {
            ;
        }

    }
    
    for(b = 1; b < 10; b++)
    {
        sum = x % 10;
        if(b = sum)
        {
            break;
        }
        else
        {
            ;
        }

    }



    printf("%d\n", b * 10 + a);
    return 0;
}
