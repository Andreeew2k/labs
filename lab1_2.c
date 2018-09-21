#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, m;

    printf("please enter the numbers:\n");
    scanf("%i %i", &n,&m);

    printf("%i\n", ++n*++m);
    printf("%s\n", m++<n? "true":"false");
    printf("%s\n", n++>m? "true":"false");

    return 0;
}
