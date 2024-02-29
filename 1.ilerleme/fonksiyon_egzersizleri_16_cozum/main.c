#include <stdio.h>
#include <stdlib.h>


void sayilari_sirala(int A[],int n)
{
    printf("dizinin sirali hali : \n");
    int i,j;
    int gecici;

    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1-i;j++)
      {
          if(A[j]>A[j+1])
          {
              gecici =A[j];
              A[j]=A[j+1];
              A[j+1]=gecici;
          }
      }
    }

}

int main()
{

    int n,i;
    printf("lutfen kac adet sayi uretilecegini giriniz \n");
    scanf("%d",&n);

    int dizi[n];
    srand(time(0));

    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d \n",dizi[i]);
    }
    sayilari_sirala(dizi,n);
    for(i=0;i<n;i++)
    {
        printf("%d \n",dizi[i]);
    }








    return 0;
}
