#include <stdio.h>

int main(void)
{
    int a = 123456;
    int sum = 0;
    int i = 0;

    printf ("%d\n", a);

    for (i = 1; i < 10; i++)
    {
        a /= 10;
        sum = i;
        if (a > 0) 
        {
            sum = i;
        }
        else 
        {
            break;
        }

    }
    printf("sum = %d\n", sum);


    return 0;



}
