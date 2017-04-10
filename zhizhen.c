#include <stdio.h>

int main(int argc, const char *argv[])
{
    int  a[5] = {1, 2, 3, 4, 5};
    int *p = &a[0];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(p++));
    }

    char str[64] = "hello word!";
    char *s = str;
    while (*s != '\0')
    {
        printf("%c", *s);
        s++;
    }
    printf("\n");
}
