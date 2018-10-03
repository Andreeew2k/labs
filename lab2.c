#include <stdio.h>
#include <math.h>
#define M_E 2.71

long double factorial (long double l)
{
    int i;
    i = 1;
    if (l == 0 || l == 1)
        return 1;
    else
        for(; l>1; l--)
            i *= l;
            return i;
}
int main(void)
{
    long double y, b, z;
    long double a,sum = 0;
    int n;
    n = 1;
    do
    {
        b = sqrt(n);
        z = -1.0*b;
        y = factorial(n);
        a=log10(y)*pow(M_E, z);
        sum += a;
        printf("%Le %Lf %Lf %Lf %Lf\n", a, b, y, z, sum);
        n++;
     }
     while(a>=0.0001);
     printf("%Lf\n", sum);
}
