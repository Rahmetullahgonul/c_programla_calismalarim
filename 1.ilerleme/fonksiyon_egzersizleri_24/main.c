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
    kullan�c� taraf�ndan saniye olarak girilen bir de�erin saat:dakika:saniye format�na
    d�n��mesini sa�layan kodu yaz�n
    */


    int saniye;
    printf("lutfen bir saniye degeri girin : \n");
    scanf("%d",&saniye);

    saathesapla(saniye);


    return 0;
}
