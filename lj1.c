#include <stdio.h>

int main(void)
{
    int a = 2, b = 0, c = -3;
    int num = 0;


    printf("a && b == %d\n", a && b);
    printf("a && c == %d\n", a && c);
    printf("a && b && c == %d\n", a && b && c);

    printf("(b && (num =10) ===>> %d\n",b && (num = 10));
    printf("num = %d\n", num);


    return 0;
}
