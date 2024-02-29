#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* soru:
    10 a 10 boyutta bir carpim tablosu olusturun ve ekrana basin*/

    int dizi[100][100];
    int i,j;

    printf(" I");
    for(i=1;i<=10;i++)
    {
        printf("%8d",i);
    }
    printf("\n");
    printf("      ");
    for(i=1;i<=10;i++)
    {
        printf("--------");
    }
    printf("\n");

    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            dizi[i][j]=i*j;
        }
    }
    for(i=1;i<=10;i++)
    {
        printf("%2d",i);
        for(j=1;j<=10;j++)
        {
            printf("%8d",dizi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
