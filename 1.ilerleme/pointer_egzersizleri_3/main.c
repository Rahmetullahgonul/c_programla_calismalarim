#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* pointer kullanarak iki sayinin yerini degistirip sayilari yer degistirmeden
    once ve yer degistirdikten sonra consala bastiriniz
    */

    int sayi1,sayi2,degisken;
    int *ptr1,*ptr2;

    ptr1=&sayi1;
    ptr2=&sayi2;

    printf("lutfen iki adet sayi giriniz : \n");
    scanf("%d %d",&ptr1,&ptr2);

    printf("sayilar yer degistirmeden once : \n");
    printf("1.sayi = %d ve 2.sayi = %d \n",ptr1,ptr2);

    degisken = ptr1;
    ptr1=ptr2;
    ptr2=degisken;

    printf("sayilar yer degistirdikten sonra : \n");
    printf("1.sayi = %d ve 2.sayi = %d \n",ptr1,ptr2);











    return 0;
}
