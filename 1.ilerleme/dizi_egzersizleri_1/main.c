#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* soru:
    ** 10 tane int tipinde deger tutan bir dizi tanimlayiniz
    ** dizinin tum elemanlarýný kullanýcýnýn girmesini saglayin
    ** dizinin en buyuk ve en kucuk elemanlarini bulup ekrana bastirin
    */


    int rahmet[10];
    int i;
    int enbuyuk,enkucuk;
    printf("lutfen diziye 10 adet tamsayi giriniz : \n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&rahmet[i]);
    }
    enbuyuk=rahmet[0];
    for(i=0; i<10; i++)
    {
        if(enbuyuk<rahmet[i])
        {
            enbuyuk=rahmet[i];
        }
    }
    printf("dizinin en buyuk sayisi = %d\n",enbuyuk);

    enkucuk=rahmet[0];
    for(i=0; i<10; i++)
    {
        if(enkucuk>rahmet[i])
        {
            enkucuk=rahmet[i];
        }
    }
    printf("dizinin en kucuk sayisi = %d\n",enkucuk);









    return 0;
}
