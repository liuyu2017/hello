#include <stdio.h>

int main (void)
{
    char c = getchar();
c
ii  printf("c(10) = %d, c(8) = %o, c(16) = %x\n", c, c, c);

    printf("c = %c\n", c - 32);

    c = getchar();
    printf("c = %c\n", c - 32);

    c = getchar();
    printf("c = %c\n", c - 32);

    return 0;
}
