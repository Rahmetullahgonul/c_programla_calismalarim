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

    /* bilgisayar taraf�ndan �retilen N adet say� bir dizide tutulmaktad�r
    dizi i�erisinde istenen bir de�erin dizideki s�ra numaras� girilerek ilgili s�rada
    bulunan dizi de�erinin silinmesini sa�layan c program�n� fonk. kullanarak yaz�n
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
