#include <stdio.h>

int main(void)
{
    int a = 14;
    int b = 32;
    int c = 8;
    int max = 0;

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("max = %d\n", max);

    return 0;
}
