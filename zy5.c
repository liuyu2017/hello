#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 6;
    int max = 0;


    max = ( a > b ) ? ((a > c ) ? a : c) : ((b > C) ? b : c);
    printf("max = %d\n", max);


    return 0;
}
