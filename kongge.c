#include <stdio.h>

int main(void)
{
    char c = getchar();

    while ((c = getchar() != EOF))
    {
        if(c == 32)
        {
            printf("%c", c + 4);

        }
        else
        {
            printf("%c", c);
        }
    }

    return 0;

}
