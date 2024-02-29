#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 1- NxN elaman içeren bir program yazýn
    // 2- Nxp elaman içeren bir matrisin elamanlarýný toplayan bir program
    //sonucu 3.bir matrise yazdýrýn



    //1.çözüm N = 3 olsun:

    /*
    int rahmet[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d",rahmet[2][2]);
    */

    //1.hoca çözümü:
/*
    int mat[10][10];
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                mat[i][j]=1;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }


    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {

            printf("%4d",mat[i][j]);
        }
        printf("\n");
    }
*/



    //2.soru hocanın çözümü:


    int dizi1[3][4]={{1,2,5,7},{5,4,8,6},{7,1,6,5}};
    int dizi2[3][4]={{1,8,5,7},{1,2,4,6},{3,7,3,1}};
    int toplam[3][4];

    int i;
    int j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }



    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {

            printf("%4d",toplam[i][j]);
        }
        printf("\n");
    }

    return 0;
}
