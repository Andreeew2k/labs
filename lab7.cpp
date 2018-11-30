#include <stdio.h>
double time1 (double x, double y)
{
    if (x>0 && y>0 )
    {
       double z=x*60+y;
       return z;
    }
        else if (x<0)
        return 0;
        else if (x==0)
        return y;
}
void time1 (int y)
 {
    if (y>0){
    int z=y/60;
    int x=y%60;
        printf("the time in minutes and hours is: %i %i\n", z,x);
    }
        else if (y<0)
            printf("error!\n");
        else if (y==0)
            printf("%i\n", y);
 }
int main (void)
{
    double x,y;
    int z;
    printf("please enter time:\n");
        scanf("%lf %lf", &x, &y);
        scanf("%i", &z);
    double a = time1(x,y);
    printf("hours to minutes %lf \n",a);
    time1(z);
    return 0;
}
