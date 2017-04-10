#include <stdio.h>

int main(void)
{
    char a = getchar();
    while(a != EOF);
    {
        if(a == ' ')
        {
            printf("%%20");
        }
        else
        {
            printf("%c", a);
        }
    }
    return 0;



}
