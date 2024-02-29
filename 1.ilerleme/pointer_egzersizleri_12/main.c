#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru:
    ** 0 dan 14 e kadar olan degerleri dizide tanimlayin
    ** dizinin icindeki cifr elemanlari bastirin
    ** dizinin icindeki tek elemanlari bastirin
    */

    int sayi_dizisi[100];
    int i;
    int *ptr;

    printf("tum dizi : \n");
    for(i=0;i<=14;i++)
    {
        sayi_dizisi[i]=i;
    }
    for(i=0;i<=14;i++)
    {
        printf("%3d",sayi_dizisi[i]);
    }
    printf("\n");

    printf("dizideki tek sayilar : \n");
    for(ptr=sayi_dizisi+1;ptr<sayi_dizisi+15;ptr=ptr+2)
    {
        printf("%3d",*ptr);
    }
    printf("\n");
    printf("dizideki cift sayilar : \n");
    for(ptr=sayi_dizisi;ptr<sayi_dizisi+15;ptr=ptr+2)
    {
        printf("%3d",*ptr);
    }



    return 0;
}
