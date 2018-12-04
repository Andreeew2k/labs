#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char a[255];
    int c=0;
    int num=0;
    FILE* f1 = fopen("F1.txt", "r");
    FILE* f2 = fopen("F2.txt", "w");
    if(f1 == NULL||f2 == NULL){
        printf("ERROR\n");
        return 1;
    }
        while(!feof(f1))
        {
            fgets(a,sizeof(a),f1);
            c = strlen(a);
           if ((a[0] == 'a' || a[0]== 'A') && (a[c-2] == 'z' || a[c - 2] == 'Z'|| a[c - 1] == 'z' || a[c - 1] == 'Z'))
            {
                fputs(a,f2);
                if (num==0)
                for(int i=0; i<c; i++)
                {
                   if(a[i]==' ')
                   num++;
                }
            }
        }
       fclose(f1);
       fclose(f2);
       printf("num of words %i\n", num+1);
    return 0;
}
