#include <stdio.h>

int main(void)
{
    int x = 4567;
    int a, b, c, d;
    
    
    printf("x = %d\n", x);

     d = x / 1000;
     c = (x % 1000) / 100;
     b = (x % 1000) % 100 / 10;
     a = (x % 1000) % 100 % 10;
    
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}
