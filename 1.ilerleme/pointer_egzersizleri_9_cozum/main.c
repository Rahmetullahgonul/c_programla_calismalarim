#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru:
    kullanicidan int tipinde bir dizinini degerlerini girmesinin isteyin
    2 pointer kullanarak girdiginiz dizi elemanlarinin bastan sona yerini degistiren
    bir program yazin
    */

    int can[5];
    int *sayi1,*sayi2;
    int n;


    printf("lutfen dizimizin eleman sayisini girin :\n");
    scanf("%d",&n);


    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("lutfen deger giriniz : \n");
        scanf("%d",sayi1);
    }


    printf("dizimizin normal hali : ");

    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("%4d",*sayi1);
    }

    printf("\n");

    int degisken;
    for(sayi1=can,sayi2=can+n-1;sayi1<sayi2;sayi1++,sayi2--)
    {
        degisken = *sayi1;
        *sayi1 = *sayi2;
        *sayi2 = degisken;

    }

    printf("dizimizin yer degismis hali : ");

    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("%4d",*sayi1);
    }
    printf("\n");
    return 0;
}
