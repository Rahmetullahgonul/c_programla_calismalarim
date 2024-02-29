#include <stdio.h>
#include <stdlib.h>
void degerleri_alma(int dizi[3][2])
{
    int i,j;
    printf("lutfen 3*2 tipinde matris girin : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&dizi[i][j]);
        }
    }
}

void toplam_hesapla(int dizi[3][2],int *max,int *min,int *toplam)
{
    int i,j;
    *toplam=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            *toplam=*toplam+dizi[i][j];
        }
    }

    *max=dizi[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(*max<dizi[i][j])
            {
                *max=dizi[i][j];
            }
        }
    }

    *min=dizi[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(*min>dizi[i][j])
            {
                *min=dizi[i][j];
            }
        }
    }


    return *toplam,*max,*min;
}


void ekrana_bastirma(int dizi[3][2])
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");
    }
}


int main()
{

    /* soru:
    ** 3 adet fonksiyon yazin
    ** kullanýcýya bir matrisin elamanarini girdiren bir fonksiyon yazin
    ** girdiginiz matris degerlerinin en buyuk ve en kucuk elamanýný ve girilen
    elamanlarin toplamini bulan bir fonksiyon yazin bu foknsiyonu adresle cagirin
    ** elemanlari girilen matrisi ekrana yazdirmaya yarayan bir fonksiyon yazin

    ** matris ornegi;
    3*2 tipinde bir matris girin
    5
    6
    4
    3
    2
    8
    matrisimiz :
    5 6
    4 3
    2 8
    en buyuk deger : 8
    en kucuk deger : 2
    matrisin toplami : 28
    */



    int max,min,toplam;
    int dizi[3][2];

    degerleri_alma(dizi);
    ekrana_bastirma(dizi);

    toplam_hesapla(dizi,&max,&min,&toplam);
    printf("girilen matrisin en kucuk sayisi = %d\nen buyuk sayisi = %d\nve toplam degeri = %d",min,max,toplam);








    return 0;
}
