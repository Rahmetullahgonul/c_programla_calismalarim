#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru:
    ** k l b d q i s t e f o r c h x elemanlarini içeren bir karakter dizisi
    tanimlayin
    ** 2 pointer kullanarak bir for dongusu kullanarak bu dizinin aynisini kopyalayin
    ve ekrana basitirin
    */

    char karakterler[15]="k l b d q i s t e f o r c h x";
    char *ptr1;
    char *ptr2;
    char dizi_kopya[15];
    int i;

    printf("dizinin kopyalanmamis hali : %s \n",karakterler);
    printf("\n");


    ptr2=dizi_kopya;
    for(ptr1=karakterler;ptr1<karakterler+15;ptr1++)
    {
        *ptr2=*ptr1;
        ptr2++;
    }
    printf("dizinin kopyasi : %s",dizi_kopya);









    return 0;
}
