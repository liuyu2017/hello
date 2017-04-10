#include <stdio.h>

int main(void)
{
    int a[5] = {1, 23, 10, 89, 35};
    int j, x, i;

    for (j = 0; j < 4; j++) 
    {
        if(a[j] > a[j + 1])
        {
            x = a[j];
            i = j;

        }
        else
        {
            x = a[j + 1];
            i = i + 1;
        }
    }
    printf("a[%d] = %d\n",i, x);

    return 0;
}  
