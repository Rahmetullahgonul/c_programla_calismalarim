#include <stdio.h>
#include <stdlib.h>

void birlestir(int A[],int B[],int N,int K)
{
    printf("\n \n \n");
    printf("dizinin son hali \n");
    int i,j;
    for(i=0; i<N; i++)
    {
        printf("%d \n",A[i]);
    }
    for(j=0; j<K; j++)
    {
        printf("%d \n",B[j]);
    }
}
int main()
{

    /* soru:
    kullanýcý tarafýndan girilen A ve B dizilierini sýrasýyla N ve K adet tamsayý
    girilmektedir bu iki dizinini birleþtirilerek tek bir dizi haline getirilmesini
    saglayan fonksiyonu yazýn

    void birlestir(int A[],int B[],int N,int K)
    */

    int n,k,i,j;
    printf("ilk dizide kac elaman olacak : \n");
    scanf("%d",&n);
    printf("ikinci dizide kac elaman olacak : \n");
    scanf("%d",&k);
    int ilk_dizi[n];
    int ikinci_dizi[k];

    for(i=0; i<n; i++)
    {
        printf("lutfen ilk dizi icin birer birer elaman girin : \n");
        scanf("%d",&ilk_dizi[i]);
    }
    printf("birinci dizi : \n");
    for(i=0; i<n; i++)
    {
        printf("%d) %d \n",i+1,ilk_dizi[i]);
    }

    for(j=0; j<k; j++)
    {
        printf("lutfen ikinci dizi icin birer birer elaman girin : \n");
        scanf("%d",&ikinci_dizi[j]);
    }
    printf("ikinci dizi : \n");
    for(j=0; j<k; j++)
    {
        printf("%d) %d \n",j+1,ikinci_dizi[j]);
    }
    birlestir(ilk_dizi,ikinci_dizi,n,k);
    return 0;
}
