#include <stdio.h>
#define xh(y) ((y) * (y))

int main(){
    int x, sm;
    printf("number = ");
    scanf("%d", &x);
    sm = 200 / xh(x + 1);
    printf ("%d\n", sm);
    return 0;
}
