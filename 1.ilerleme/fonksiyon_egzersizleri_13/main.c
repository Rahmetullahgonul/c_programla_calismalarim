#include <stdio.h>
#include <stdlib.h>



int enbuyuk(int A[],int elamansayisi)
{
    int i,enb;
    enb=A[0];

    for(i=1;i<elamansayisi;i++)
    {
        if(A[i]>enb)
        {
            enb=A[i];
        }
    }
    return enb;
}


int enkucuk(int B[],int elamansayisi)
{
    int i,enk;
    enk=B[0];

    for(i=1;i<elamansayisi;i++)
    {
        if(B[i]<enk)
        {
            enk=B[i];
        }
    }
    return enk;
}



int main()
{

/* soru:
bilgisayar tarafýndan reastgele üretilen n adet sayi bir dizide tutulmaktadir dizi
içerisindeki maksimum ve minumum deðerlerin iki ayrý fonksiyon kullanarak bulunmasýný
saðlayan programý yazýn
*/


    int n;
    int i;
    printf("kac adet sayi uretilecek :\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("dizi elamanlari \n");

    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d \n",dizi[i]);
    }

    printf("en buyuk = %d \n",enbuyuk(dizi,n));
    printf("en kucuk = %d",enkucuk(dizi,n));



















    return 0;
}
