#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
 srand(time(0));
int *a, *ptr;
int b;
a=malloc(10*sizeof(int));
ptr=malloc(10*sizeof(int));
 for(int i=0; i<10; i++)
 {
  a[i] = rand()%10;
  printf("%i ", a[i]);
 }
 printf("\n");
 scanf("%d", &b);
 for(int i=1; i<10; i++)
 {
  ptr[i]=a[i];
  printf("%i ", ptr[i]);
 }
 printf("\n");
 ptr[0]=b;
 printf("%i ", ptr[0]);
 for(int i=1; i<10; i++)
 {
  ptr[i]=a[i];
  printf("%i ", ptr[i]);
 }
 printf("\n");
 free(a);
 free(ptr);
}
