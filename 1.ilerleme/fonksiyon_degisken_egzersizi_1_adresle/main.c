#include <stdio.h>
#include <stdlib.h>

void bolunebilirlik(int *sayi)
{
    if(*sayi%2==0)
    {
        printf("%d sayisi cift sayidir \n",*sayi);
    }
    if(*sayi%3==0)
    {
        printf("%d sayisi 3 un bir katidir \n",*sayi);
    }
    if(*sayi%2==0 && *sayi%3==0)
    {
        printf("%d sayisi 6 nin bir katidir ",*sayi);
    }
}





int main()
{

    /*soru:
    ** 2 adet fonksiyon yazin
    ** 1.fonksiyon: girlen sayinin 2 nin kati oldugunu gosterir
    ** 2.fonksiyon: girilen sayinin 3 un kati oldugunu gosterir
    ** bu iki fonksiyonu kullanarak bir c programi yazin bu program kullanicinin
    girdigi degerin cift olup olmadigini 3 un kati olup olmadigini ve 6 nin kati
    olup olmadigini belirlesin ve ekrana yazdirsin
    ** ayni c programini fonksiyonu degiskenin adresiyle cagirip yazin
    */


    int sayi;
    printf("lutfen bir sayi giriniz : \n");
    scanf("%d",&sayi);

    bolunebilirlik(&sayi);


    return 0;
}
