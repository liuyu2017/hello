#include <stdio.h>

int main(void)
{
    int i, j = 0;
    char a = getchar();

    while((a = getchar()) != EOF)
    {
        if((a < 58) &&(a > 47))
        {
            printf("%c", a);
            j = j + 1;
        }
        else
        { 
            printf("%c", a);
        }
    }

    printf("j = %d\n", j);

    return 0;
}

