#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru:
    kullanicidan int tipinde bir dizinini degerlerini girmesinin isteyin
    2 pointer kullanarak girdiginiz dizi elemanlarinin bastan sona yerini degistiren
    bir program yazin
    */


    int eleman_sayisi;
    int i;
    int *ptr1;
    int *ptr2;
    printf("kac elemanli bir dizi olusturmak istersiniz : \n");
    scanf("%d",&eleman_sayisi);
    int sayi_dizisi(eleman_sayisi);
    ptr1=sayi_dizisi;

    printf("lutfen dizinin elemanlarini giriniz : \n");
    for(i=0;i<eleman_sayisi;i++)
    {
        scanf("%d",ptr1);
        ptr1++;
    }





    return 0;
}
