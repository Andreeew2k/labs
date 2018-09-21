#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    float a1, b1, f_out;
    double a2, b2, d_out;

    printf("please enter numbers float!:\n");
    scanf("%f %f", &a1,&b1);
    f_out = (pow(a1-b1,3) - (pow(a1,3)-3*a1*a1*b1))/(pow(b1,3)-3*a1*b1*b1);

    printf("please enter numbers  double!:\n");
    scanf("%lf %lf", &a2,&b2);
    d_out = (pow(a2-b2,3) - (pow(a2,3)-3*a2*a2*b2))/(pow(b2,3)-3*a2*b2*b2);

    printf("%f is result for float\n", f_out);
    printf("%lf is result for double\n", d_out);
    return 0;
}
