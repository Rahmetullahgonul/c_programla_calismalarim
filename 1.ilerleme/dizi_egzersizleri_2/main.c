#include <stdio.h>
#include <stdlib.h>
#define RAHMET 10

int main()
{
    /* soru: yazmasi zor oldugu icin yazmadim*/

    int i,j,n;
    int dizi[RAHMET][RAHMET];
    printf("kac sutunluk bir matris istersiniz : ");
    scanf("%d",&n);

    printf("\n \np ");

    for(i=0;i<n;i++)
    {
        printf("%4d",i);
    }
    printf("\nn\n");
    for(i=0;i<=n;i++)
    {
        printf("----");
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        dizi[i][i]=1;
        dizi[i][0]=1;
        for(j=1;j<i;j++)
        {
            dizi[i][j]=dizi[i-1][j]+dizi[i-1][j-1];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d --",i);

        for(j=0;j<=i;j++)
        {
            printf("%4d",dizi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
