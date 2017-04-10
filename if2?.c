#include <stdio.h>

int main(void)
{
    int a = 5, b = 8, c = 2;

    if( a > b > c)
    {
        printf("a > b > c\n");
    }
    else if (a > b < c)
    {
        printf("a > b < c\n");
    }
    else if (a < b > c)
    {
        printf("a < b > c\n");
    }
    else
    {
        printf("a < b > c\n");
    }


    return 0;

}
