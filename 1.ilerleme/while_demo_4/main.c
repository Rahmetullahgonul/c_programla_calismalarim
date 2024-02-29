#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*soru:
    **while döngüsü kullanarak 0 ile kullanýcýdan aldýðý n sayýsý arasýnda yer alan 17nin
    tüm tam sayý katlarýný ekrana bastýran bir program yazýnýz
    ** her satýrda 10 adet sayý gözüksün
    */



    int sayi;
    int satir=0;
    printf("lutfen bir sayi degeri giriniz : \n");
    scanf("%d",&sayi);

    while(sayi>=0)
    {
        if(sayi%17==0)
        {
            printf("%d ",sayi);
            satir = satir +1;
            if(satir%10==0)
            {
                printf("\n");
            }
        }
        sayi = sayi-1;
    }

















    return 0;
}
