#include <stdio.h>

int main (void)
{
    int a[9] = {1, 2, 3, 1 ,1, 1, 1, 1, 1};
    int i = 0;
    int j = 0;
    int flag = 0;
    for(i = 0; i < 9; i++)
    {
        printf("%d," ,a[i]);
    }
    printf("\n");
    for (i = 0; i < 9; i++)
    {

        for(j= i + 1; j < 9; j++ )
        {
            if(a[j] ==  a[i])
            {
                printf("a[%d] = %d,",  j, a[j]);
                flag = 1;
            }
        }
        
        
        if(flag == 1)
        {
            printf("a[%d] = %d\n", i, a[i]);
            break;
        }
    }
    return 0 ;
}
