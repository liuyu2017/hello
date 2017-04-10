#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int *p = a;
    
    int i;
    for(i = 0; i < 6; i++)
        printf("%d\n", a[i]);

    for(i = 0; i < 6; i++)
     printf("%d\n", *(a + i));

    for(i = 0; i < 6; i++)
        printf("%d\n", *(p + i));

    for(i = 0; i < 6; i++)
        printf("%d\n", p[i]);

    printf("%d\n", (&a[2])[2]);

    return 0;
}
