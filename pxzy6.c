#include <stdio.h>

int main (void)
{
    int i, j, k;
    int flag= 0;
    int a[9] = {1, 2, 3, 3, 2, 1, 1, 2, 3};
    int b[9];
    for (i = 0; i < 9; i++)
    {
        printf("a[%d] = %d ", i, a[i]);
        b[i] = a[i];
    }
    printf("\n");


    for(i = 0; i < 9 ; i ++)
    {
        if(b[j] == 0)
        {
            continue;
        }
        for(j = i + 1; j < 9; j++)
        {
                if (k == 0)
                {
                    if(b[i] == b[j])
                    {
                        k  = 1;
                    }
                }
            
            if(k == 1)
            {
                flag = flag + 1;
                printf("b[%d],",j);
                b[j] = 0;
                k = 0;
            }
        }
    
            printf("b[%d] : %d", i, flag);
            printf("\n");
            flag = 1;
    
    }

    return 0;

}
