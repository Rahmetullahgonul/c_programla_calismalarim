#include <stdio.h>
#include <stdlib.h>

void fibonnaci(int sayi)
{
    int i;
    int a,b=1;
    int sonuc=0;

    printf("0 ");
    for(i=0;i<=sayi-1;i++)
    {
        a=b;
        b=sonuc;
        sonuc=a+b;
        printf("%d ",sonuc);
    }
}


int main()
{

/* soru:
her sayýnýn kendinden önceki sayý ile toplanmasý sonucu oluþan sayý dizisine fibonacci
dizisi adý verilmektedir buna göre klavyeden kaç adet fibonacci sayýsý üretileceðini
söyleyen ve ekrana bastýran programý yazýn
*/


    int num;
    printf("kac adet fibonacci sayisi uretmek istersiniz : \n");
    scanf("%d",&num);

    fibonnaci(num);





    return 0;
}
