#include <stdio.h>

int main(){
    int x, i;
    int j = 0;
    printf("number = ");
    scanf("%d", &x);
    for(i = 1; x != 0; i++)
    {
        x = x / 10;
        j = j + 1;
    }
    printf("n = %d\n", j);
    return 0;
}
