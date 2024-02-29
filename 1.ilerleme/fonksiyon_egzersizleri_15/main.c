#include <stdio.h>
#include <stdlib.h>


void ucgenc(int n)
{
    int i,j;
    int bosluksayisi=n-1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=bosluksayisi; j++)
        {
            printf(" ");
        }
        bosluksayisi--;
        for(j=1; j<=2*i-1; j++)
        {
            printf("c");
        }
        printf("\n");
    }



}

void ucgenarti (int n)
{
    int j,i;
    int bosluksayisi=1;

    for(i=1; i<=n-1; i++)
    {

        for(j=1; j<=bosluksayisi; j++)
        {
            printf(" ");
        }
        bosluksayisi++;
        for(j=1; j<=2*(n-i)-1; j++)
        {
            printf("+");
        }

        printf("\n");

    }
}


int main()
{

    /* aþaðýda verilen ekran görüntüsünün elde edilmesini saðlayan prog.yaz

    satir sayisi:4
            c
           ccc
          ccccc
         ccccccc
          +++++
           +++
            +
    */



    int satir;
    printf("lutfen satir sayisini girin: \n");
    scanf("%d",&satir);

    ucgenc(satir);
    ucgenarti(satir);

    return 0;
}
