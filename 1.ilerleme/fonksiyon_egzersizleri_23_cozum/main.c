#include <stdio.h>
#include <stdlib.h>

void sekilciz(int kenar,char karakter)
{
    int i,j;

    for(j=kenar; j>0; j--)
    {
        for(i=1;i<=kenar-j;i++)
        {
            printf(" ");
        }
        for(i=1;i<=2*j-1;i++)
        {
            printf("%c",karakter);
        }
        printf("\n");
    }

    for(j=1;j<=kenar;j++)
    {
        for(i=1;i<=kenar-j;i++)
        {
            printf(" ");
        }
        for(i=1;i<=2*j-1;i++)
        {
            printf("%c",karakter);
        }

        printf("\n");
    }
}















int main()
{
    int kenar;
    char karkter;
    printf("bastirmak istediginiz karakter : \n");
    scanf("%c",&karkter);
    printf("kenar sayisi : \n");
    scanf("%d",&kenar);

    printf("\n\n\n");
    sekilciz(kenar,karkter);
    return 0;
}
