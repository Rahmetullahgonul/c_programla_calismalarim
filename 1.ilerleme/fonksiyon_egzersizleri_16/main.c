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
    bilgisyar taraf�ndan rastgele �retilen N adet say� bir dizide tutulmaktadir buna
    g�re a�a��da verilen fonksiyon prototipini kullanarak dizi elemanlar�n�n k���kten
    b�y��e do�ru s�ralanmas�n� sa�layan program� yaz

    void sirala(int A[],int adet)
    */

    int adet;
    printf("kac adet sayi urettirmek istersiniz : \n");
    scanf("%d",&adet);
    int sayi_dizisi[adet];

    diziUret(sayi_dizisi,adet);





    return 0;
}
