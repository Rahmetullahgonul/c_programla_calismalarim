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
    kullan�c� taraf�ndan b�lme ve b�len degerleri girilerek b�lme i�lemi yap�lmak
    istenmektedir buna g�re a�ag�da verilen prototipi kullanarak b�l�m ve kalan�n
    elde edilmesini sa�layan fonksiyonu yazin

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
