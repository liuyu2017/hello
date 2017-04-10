#include <stdio.h>

int main (void)
{
    int a = 0;
    int b = 0;
    char c = getchar();

    while ((c = getchar()) != EOF)
    {
        if(c = 13)
        {
             
           b = a + 1;
        }
        else
        {
           b = a ;
        }
    }
    printf("%d\n", b);



    return 0;


}
