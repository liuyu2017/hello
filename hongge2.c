#include <stdio.h>

int main(void)
{
    char a, b, c, d, e, f, g;
    int flag = 0;
    while ((a = getchar()) != EOF)
    {
        if(flag == 0)
        {
            if(a == 'a')
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }


        if (flag == 1)
        {
            b = getchar();
            if(b == 'c')
            {
                flag = 2;
            }
            else
            {
                flag = 0;
            }
        }
        
        
        if(flag == 2)
        {
            c = getchar();
            if(c = 'b')
            {
                printf("%c%c ", a, b);
                flag = 0;
            }
            else
            {
                flag = 0;
            }

        }
    }
    return 0;
}
