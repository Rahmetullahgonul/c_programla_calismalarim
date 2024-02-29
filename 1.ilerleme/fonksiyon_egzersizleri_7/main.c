#include <stdio.h>
#include <stdlib.h>


void kontrol_et(int sayi)
{
    int  i;
    int sonuc=0;

    for(i=1;i<sayi;i++)
    {
        if(sayi%i==0)
        {
            printf("sayinin pozitif tam bolenleri %d \n",i);
            sonuc = sonuc + i;

        }
    }
    if(sonuc ==sayi)
    {
        printf("girdiginiz %d sayisi mukemmel bir sayidir \n",sayi);
    }
    else
    {
        printf("girdiginiz %d sayisi mukemmel bir sayi degildir \n",sayi);
    }
}


int main()
{

    /* soru :
    kendisi hariç pozitif tam bölenlerinin toplamý kendisine eþit olan sayýlara
    mükemmel sayi adi verilir buna gore klavyeden girilen sayinin mükemmel sayi
    olup olmadýgýný kontrol ediniz
    */

    int num;
    printf("lutfen bir sayi girin : \n");
    scanf("%d",&num);

    kontrol_et(num);










    return 0;
}
