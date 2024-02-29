#include <stdio.h>
#include <stdlib.h>

/*
void kelebekciz_ust(int satir_sayisi)
{
    int i,j;
    int yildiz_sayisi;
    int bosluk_sayisi;
    bosluk_sayisi=((2*satir_sayisi)-2);
    yildiz_sayisi=2*n-1

    for(i=0; i<satir_sayisi/2; i++)
    {
        for(bosluk_sayisi;bosluk_sayisi<=2*i;bosluk_sayisi++)
        {
            printf("*");
        }

        for(j=0; j<bosluk_sayisi; j++)
        {
            printf(" ");
        }


        printf("\n");
    }
}
*/

void kelebekciz_alt(int satir_sayisi)
{
    int i,j;
    int yildiz_sayisi;
    int bosluk_sayisi;
    bosluk_sayisi=(satir_sayisi*2)-7;
    yildiz_sayisi=(satir_sayisi*2)-7;

    for(i=0;i<satir_sayisi/2;i++)
    {
        for(yildiz_sayisi=0;yildiz_sayisi<=(satir_sayisi*2)-8;yildiz_sayisi++)
        {
            printf("*");
        }

        printf("\n");

    }
}




int main()
{

    /*soru:

    *********
     *******
      *****
       ***
        *
        *
       ***
      *****
     *******
    *********
    */
    int satir;
    printf("yapilacak satir sayisi :\n");
    scanf("%d",&satir);
   // kelebekciz_ust(satir);
    kelebekciz_alt(satir);

 /*   for(bosluk_sayisi=((2*satir_sayisi)-2); bosluk_sayisi<satir_sayisi; bosluk_sayisi++)
    {
        printf("*");
    }*/

    return 0;
}
