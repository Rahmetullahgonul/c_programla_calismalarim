#include <stdio.h>
#include <stdlib.h>

int yer_degisme(int n)
{
    int i;
    int sayilar[n];
    srand(time(0));
    printf("Dizi elamanlari : \n");

    for(i=1; i<=n; i++)
    {
        sayilar[i]=rand()%100;
        printf("%d) %d \n",i,sayilar[i]);
    }
    int degisken;
    printf("hangi elamani silmek istersiniz ? \n");
    scanf("%d",&degisken);
    if(degisken>n ||degisken<=0)
    {
        printf("listede %d.sirada olan bir sayi bulunmamaktadir \n",degisken);
    }

}









int main()
{

    /* bilgisayar tarafýndan üretilen N adet sayý bir dizide tutulmaktadýr
    dizi içerisinde istenen bir deðerin dizideki sýra numarasý girilerek ilgili sýrada
    bulunan dizi deðerinin silinmesini saðlayan c programýný fonk. kullanarak yazýn
    */

    int kac_adet;
    printf("kac adet sayi urettirmek istersiniz ? \n");
    scanf("%d",&kac_adet);


    yer_degisme(kac_adet);


    int degisken;
    printf("hangi elamani silmek istersiniz ? \n");
    scanf("%d",&degisken);
    if(degisken>n ||degisken<=0)
    {
        printf("listede %d.sirada olan bir sayi bulunmamaktadir \n",degisken);
    }


    return 0;
}
