#include <stdio.h>
#include <stdlib.h>

int main()
{

    // pointer kullanarak iki sayiyi toplayiniz

    int sayi1,sayi2,toplam;
    int *ptr1,*ptr2;

    ptr1=&sayi1;
    ptr2=&sayi2;

    printf("lutfen iki adet sayi giriniz : \n");
    scanf("%d %d",ptr1,ptr2);

    toplam=*ptr1+*ptr2;
    printf("%d + %d = %d",*ptr1,*ptr2,toplam);


    return 0;
}
