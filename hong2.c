#include <stdio.h>
#define sq(y) (y) * (y)

int main(){
    int a, zd;
    printf("number: ");
    scanf("%d",&a);
    zd = sq(a + 1);
    printf("zd = %d\n", zd);
    return 0;

}
