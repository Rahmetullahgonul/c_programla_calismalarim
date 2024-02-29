#include <stdio.h>
#include <stdlib.h>

float ortalama(int A[],int n)
{
    int i,orta;
    float toplam=0;
    for(i=0; i<n; i++)
    {
        toplam=toplam+A[i];
    }
    orta=toplam/n;
    return orta;
}


int main()
{
    /* soru
    kullanıcı tarafından N elamanlı bir diziye alınan tamsayıların ortalamasının
    bulunmasını saglayan fonksiyonun prototipi aşagıda verilmişit

    (int *dizim,int boyut)
    */

    int n,i;
    printf("diziniz kac elamanli olsun :\n");
    scanf("%d",&n);
    int dizi[n];
    for(i=0; i<n; i++)
    {
        printf("%d.sayiyi giriniz \n",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("dizinin tamami :\n");
    for(i=0; i<n; i++)
    {
        printf("%d \n",dizi[i]);
    }
    float ort;
    ort=ortalama(dizi,n);

    printf("uretilen dizinin ortalamasi = %.2f",ort);

    return 0;
}
