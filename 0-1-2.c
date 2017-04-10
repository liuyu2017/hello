#include <stdio.h>
#include <math.h>

int main (void)
{
    float a, b, c, delt, x1, x2;
    printf("a = 4, b =8, c = 4");
    scanf("%f%f%f",&a, &b, &c);
    delt = b * b - 4 * a * c;
    x1 = (-b + sprt(delt))/(2 * a);
    x2 = (-b - sprt(delt))/(2 * a);
    printf("x1 = %2f, x2 = %2f\n", x1, x2);
    
    return 0;
}

