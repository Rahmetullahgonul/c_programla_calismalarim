#include <stdio.h>
#include <stdlib.h>

void bolmeislemi(int bolunen, int bolen)
{
    int bolum;
    bolum = bolunen/bolen;

    int kalan;
    kalan=bolunen%bolen;

    printf("%d/%d islemi sonucunda bolum = %d ve kalan =%d",bolunen,bolen,bolum,kalan);
}

int main()
{
    /* soru:
    kullanýcý tarafýndan bölme ve bölen degerleri girilerek bölme iþlemi yapýlmak
    istenmektedir buna göre aþagýda verilen prototipi kullanarak bölüm ve kalanýn
    elde edilmesini saðlayan fonksiyonu yazin

    void bolmeislemi(int bolunen, int bolen);
    */

    int bolunen,bolen;
    printf("lutfen bolunecek sayiyi giriniz : \n");
    scanf("%d",&bolunen);
    printf("lutfen boleni giriniz : \n");
    scanf("%d",&bolen);

    bolmeislemi(bolunen,bolen);




    return 0;
}
