#include <stdio.h>
#include <stdlib.h>

int fonksiyon_1(int sayi)
{
    int sonuc1=sayi%2;
   /* if(sayi%2==0)
    {
        printf("girilen %d sayisi 2 nin bir katidir \n",sayi);
    }
    else{
        printf("girilen %d sayisi 2 nin bir kati degildir \n",sayi);
    }*/
    return sonuc1;
}

int fonksiyon_2(int sayi)
{
    int sonuc2=sayi%3;
   /* if(sayi%3==0)
    {
        printf("girilen %d sayisi 3 un bir katidir \n",sayi);
    }
    else{
        printf("girilen %d sayisi 3 un bir kati degildir \n",sayi);
    }*/
    return sonuc2;
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

    if(fonksiyon_1(sayi)==0)
    {
        printf("%d sayiyisi cifttir \n",sayi);
    }

    if(fonksiyon_2(sayi)==0)
    {
        printf("%d sayisi 3 un bi katidir \n",sayi);
    }
    if((fonksiyon_1(sayi)==0)&&(fonksiyon_2(sayi)==0))
    {
        printf("%d sayisi 6 nin bir katidir \n",sayi);
    }








    return 0;
}
