#include <stdio.h>
#include <stdlib.h>7


void kayitsil(int A[], int sira, int elamansayisi)
{
    int i;
    if(sira>elamansayisi||sira<0)
    {
        printf("gecerli bir sira numarasi girin ");
    }
    else
    {
        for(i=sira-1;i<elamansayisi-1;i++)
        {
            A[i]=A[i+1];
        }
        printf("elaman silindikten sonraki dizi : \n");

        for(i=0;i<elamansayisi-1;i++)
        {
            printf("%d\n",A[i]);
        }
    }
}

int main()
{


    int n;
    int i;
    int sirano;
    printf("kac adet sayi uretilecek ? \n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(i=1;i<=n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d) %d\n",i,dizi[i]);
    }

    printf("silinecek degerin sira numarasini giriniz :\n");
    scanf("%d",&sirano);

    kayitsil(dizi,sirano,n);





    return 0;
}
