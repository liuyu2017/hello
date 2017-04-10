#include <stdio.h>

int main(void)
{
    int a = 21, b = 11;
   
    if( a <= 12 )
    {
        printf("%d : %d am\n", a, b);
    }
    else 
    {
        printf("%d : %d pm\n", a-12, b);
    }

    return 0;

}
