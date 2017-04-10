#include <stdio.h>

int main(void)
{
    int num = 0;
    int x = 456;
    if( (x > 0) && ( x <=99))
    {
        printf("num = 2\n");
    }
    else if((x > 99) && (x <= 999))
    {
        printf("num = 3\n");
    }
    else if((x > 999) && (x <= 9999))
    {
        printf("num = 4\n");
    }


    return 0;
}
