#include <stdio.h>
#include <stdlib.h>

void hesaplama(int *dizi)
{
    int i;
    int en_buyuk,en_kucuk;
    printf("dizimiz :\n");
    for(i=0;i<10;i++)
    {
        printf("%d) %d\n",i+1,*(dizi+i));
    }
    en_buyuk=*dizi;
    en_kucuk=*dizi;

    for(i=0;i<10;i++)
    {
        if(en_buyuk<*(dizi+i))
        {
            en_buyuk=*(dizi+i);
        }
    }
    printf("dizinin en buyuk sayisi = %d\n",en_buyuk);

    for(i=0;i<10;i++)
    {
        if(en_kucuk>*(dizi+i))
        {
            en_kucuk=*(dizi+i);
        }
    }
    printf("dizinin en kucuk sayisi = %d\n",en_kucuk);
}

int main()
{

    /* soru:
    ** 10 tane int tipinde elemaný olan bir dizi tanimlayin ve bu elemanlari
    kullanici girsin
    ** pointer yardimiyla dizideki en buyuk ve en kucuk degerini bulun
    */

    int dizi[100];
    int i;
    int *ptr;
    printf("lutfen 10 adet eleman giriniz : \n");
    ptr=dizi;
    for(i=0;i<10;i++)
    {
        scanf("%d",&*(ptr+i));
    }

    hesaplama(dizi);
    return 0;
}

