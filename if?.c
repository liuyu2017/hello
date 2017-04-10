#include <stdio.h>

int main(void)
{
    int a = 5, b = 8, c = 2;
    
    if ( a > b && b > c )
    {
        printf("a > b > c, a = 5, b = 8, c = 2\n");
    }

    else if ( a < b && b > c)
    {
        printf("a < b > c, a = 5, b = 8 ,c = 2\n");
    }
    else if ( a > b && b < c)
    {
        printf("a > b < c, a = 5, b = 8, c = 2\n");
    }
    else 
    {
        printf("a < b > c, a = 5, b = 8, c = 2\n");
    }


    return 0;


}
