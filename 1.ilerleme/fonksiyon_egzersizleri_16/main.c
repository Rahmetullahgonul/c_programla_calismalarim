#include <stdio.h>
#include <stdlib.h>

void diziUret(int A[],int n)
{
    int i;

    srand(time(0));
    printf("dizi elamanlari \n");

    for(i=1; i<=n; i++)
    {
        A[i]=rand()%100;
        printf("%d) %d \n",i,A[i]);

        int enkucuk;
        for(i=0; i<=n; i++)
        {
            enkucuk=A[i];
            if(enkucuk>A[i])
            {
                enkucuk=A[i];
                printf("en kucuk sayi =%d \n",A[i]);
            }
        }

    }



}



int main()
{


    /* soru:
    bilgisyar tarafýndan rastgele üretilen N adet sayý bir dizide tutulmaktadir buna
    göre aþaðýda verilen fonksiyon prototipini kullanarak dizi elemanlarýnýn küçükten
    büyüðe doðru sýralanmasýný saðlayan programý yaz

    void sirala(int A[],int adet)
    */

    int adet;
    printf("kac adet sayi urettirmek istersiniz : \n");
    scanf("%d",&adet);
    int sayi_dizisi[adet];

    diziUret(sayi_dizisi,adet);





    return 0;
}
