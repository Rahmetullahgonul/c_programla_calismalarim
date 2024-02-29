#include <stdio.h>
#include <stdlib.h>

void saathesapla(int saniye)
{
    int dakika;
    int saat;

    dakika=saniye/60;
    saat=dakika/60;
    dakika=dakika%60;
    saniye=saniye%60;
    printf("%d saat %d dakika %d saniye",saat,dakika,saniye);
}

int main()
{

    /* soru:
    kullanıcı tarafından saniye olarak girilen bir değerin saat:dakika:saniye formatına
    dönüşmesini sağlayan kodu yazın
    */


    int saniye;
    printf("lutfen bir saniye degeri girin : \n");
    scanf("%d",&saniye);

    saathesapla(saniye);


    return 0;
}
