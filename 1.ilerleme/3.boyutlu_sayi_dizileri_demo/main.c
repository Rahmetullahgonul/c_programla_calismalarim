#include <stdio.h>
#include <stdlib.h>

int main()
{

    //kullanicidan 2 adet 3 e 2 lik matris degerlerini aliniz bunlari bir 3 boyutlu
    //sayi dizisine atayiniz hangi indexte hangi deger var bunlari consala yazin


    /*
    //benim denemem

    int rahmet[2][3][2]={{{'a','b'},{'c','d'},{'e','f'}},
    {{'g','h'},{'j','k'},{'l','m'}}};
    int a;
    printf("bir sayi giriniz:\n");
    scanf("%d",&a);
    int b;
    printf("bir sayi giriniz:\n");
    scanf("%d",&b);
    int c;
    printf("bir sayi giriniz:\n");
    scanf("%d",&c);
    int d;
    printf("bir sayi giriniz:\n");
    scanf("%d",&d);
    int e;
    printf("bir sayi giriniz:\n");
    scanf("%d",&e);
    int f;
    printf("bir sayi giriniz:\n");
    scanf("%d",&f);
    int g;
    printf("bir sayi giriniz:\n");
    scanf("%d",&g);
    int h;
    printf("bir sayi giriniz:\n");
    scanf("%d",&h);
    int j;
    printf("bir sayi giriniz:\n");
    scanf("%d",&j);
    int k;
    printf("bir sayi giriniz:\n");
    scanf("%d",&k);
    int l;
    printf("bir sayi giriniz:\n");
    scanf("%d",&l);
    int m;
    printf("bir sayi giriniz:\n");
    scanf("%d",&m);


    printf("%d",rahmet[1][1][1]);
*/


    // hocanin cozumu


    int rahmet[2][3][2];

    printf("lutfen 12 adet deger giriniz\n");

    int i,j,k;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&rahmet[i][j][k]);
            }
        }
    }

    printf("girdiginiz degerler\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("rahmet[%d][%d][%d]=%d\n",i,j,k,rahmet[i][j][k]);
            }
        }
    }






























    return 0;
}
