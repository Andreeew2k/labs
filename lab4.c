#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
srand(time(0));
int a[10], b, c[10];
for(int i=0; i<10; i++)
{
a[i] = rand()%10;
printf("%i ", a[i]);
}
printf("\n");
scanf("%d", &b);
for(int i=1; i<10; i++){
c[i]=a[i];
printf("%i ", c[i]);
 }
 printf("\n");
 c[0]=b;  
 printf("%i ", c[0]);  
 for(int i=1; i<10; i++){
c[i]=a[i];
printf("%i ", c[i]);
}                                                     
}
