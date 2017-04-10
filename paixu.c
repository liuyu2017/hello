#include <stdio.h>


int main(void)
{

    int a[5] = {7, 2, 5, 3, 1};
    int x = 5;
    int i, j, y;

        for (i = 0; i < x; i++ )
        {
       
           for(j = 0; j < x - 1 - i; j++)
            {
                if(a[j] > a[j + 1])
                {
                    y = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = y;
                }
            }
        }

        for(i = 0; i < x; i++)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }

        printf("\n");
        
        return 0;


}
