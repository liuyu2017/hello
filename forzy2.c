#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    int mul = 1;
    

    for(i = 1; i <= 10; i++)
    {
        
        mul = mul * i;
        sum = sum + mul;
    }
    printf("sum = %d\n", sum);

    return 0;
}
