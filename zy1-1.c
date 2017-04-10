#include <stdio.h>

int main(void)
{
    int x = 456;
    int a, b;
    int sum = 1;
    printf("x = %d\n", x);


    a = x / 10;
   
    if(a != 0)
    {
        sum = sum + 1;
    }

    b = a / 10;
    if(b != 0)
    {
        sum = sum + 1;
    }
    printf("sum = %d\n", sum);
        


    
    return 0;
}





