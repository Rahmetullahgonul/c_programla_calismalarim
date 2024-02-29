#include <stdio.h>
#include <stdlib.h>

void sayi_tespiti(int *sayi_dizisi,int n)
{
    int aranan;
    int sayac=1;
    int i;
    printf("dizimiz :\n");
    for(i=0;i<n;i++)
    {
        printf("%d) %d\n",i+1,*(sayi_dizisi+i));
    }
    printf("hangi sayiyi ariyosunuz :\n");
    scanf("%d",&aranan);
    int sonuc;
    for(i=0;i<n;i++)
    {
        if(aranan==*(sayi_dizisi+i))
        {
            sonuc=1;
            break;
        }
        else;
        sayac++;
    }
    if(sonuc==1)
    {
        printf("dizide aradiginiz %d sayisi dizinin %d.sirada bulunmaktadir",aranan,sayac);
    }
    else
    {
        printf("dizide aradiginiz %d sayisi dizide bulunmamaktadir",aranan);
    }
}
int main()
{

    /* soru:
    dizinin elemanlarini giriniz : 10 20 30 40 50 60 70
    aradiginiz eleman : 35

    output
    35 dizide yer almiyor(eger dizide varsa kacinci sirada)
    */

    int n;
    printf("diziniz kac elemanli olsun : \n");
    scanf("%d",&n);

    int i;
    int *ptr;
    int sayi_dizisi[n];
    ptr=sayi_dizisi;
    printf("lutfen diziye girmek istediginiz sayilari yazin : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    sayi_tespiti(sayi_dizisi,n);
    return 0;
}



























