#include <stdio.h>
#include <stdlib.h>

void sayidegis(int A[],int n,int degisecek_satir,int yeni_sayi)
{
    int i,j;

    for(i=0; i<n; i++)
    {
        if(degisecek_satir-1==i)
        {
            A[i]=yeni_sayi;
        }
    }
    printf("degistirilmis dizinin son hali: \n");
    for(j=0; j<n; j++)
    {
        printf("%d \n",A[j]);
    }
}
int main()
{

    /* soru:
    bilgisayar taraf�ndan uretilen N adet say� bir dizide tutulmaktad�r dizi i�erisinde
    dizi s�ra numaras� belirterek klavyeden al�nan bir tamsayinin ilgili s�raya
    eklenmesini sa�layan c program�n� yaz�n
    */

    int n,sirano,i;
    printf("kac adet sayi uretilsin : \n");
    scanf("%d",&n);
    int sayi_dizisi[n];
    srand(time(0));
    printf("olusturulan dizi :\n");
    for(i=0; i<n; i++)
    {
        sayi_dizisi[i]=rand()%100;
        printf("%d) %d\n",i+1,sayi_dizisi[i]);
    }
    int satir;
    printf("hangi satirdaki sayiyi degistirmek istersiniz : \n");
    scanf("%d",&satir);
    int yeni;
    printf("hangi sayi ile degistirilsin : \n");
    scanf("%d",&yeni);

    sayidegis(sayi_dizisi,n,satir,yeni);


    return 0;
}
