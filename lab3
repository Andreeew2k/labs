#include <cs50.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void)
{
double sum=0.0, y=0, s=0, u=0;
for (double x=pi/5 ; x <= pi; x+=(pi-(pi/5))/10)
{
    s = 0;
    y=pow(pi,2)/8-(pi/4)*fabs(x);
    for (int n = 1; n<41; n++)
    {
        s += cos((2*n-1)*x)/(pow((2*n-1),2));
    }
int n=1;
    do
{
        u = cos((2*n-1)*x)/(pow((2*n-1),2));
        sum +=u;
        n++;
}while (u>0.0001);
    printf("X= %lf     ", x);
    printf("Y= %lf     ", y);
    printf("SN= %lf    ", s);
    printf("SE= %lf\n", sum);
}
}
