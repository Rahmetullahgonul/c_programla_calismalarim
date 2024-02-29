#include <stdio.h>
#include <stdlib.h>

void tek_cift(int sayi)
{
    if(((sayi%2==0)&&(sayi!=0))&&(sayi>0))
    {
        printf("%d sayisi cift bir sayidir ",sayi);
    }

    else if((sayi%2==1)&&(sayi>0))
    {
         printf("%d sayisi tek bir sayidir ",sayi);
    }
    else if(sayi<0)
    {
         printf("%d sayisi negatif bir sayidir ",sayi);
    }
    else if(sayi==0)
    {
        printf("girdiginiz deger sifirdir");
    }
    else{
        printf("girilen degerlerde bi hata meydana geldi");
    }

}


int main()
{

    /* soru:
    klavyeden girilen pozitif bir tam sayýnýn tek ya da çift oldugunu fonksiyon
    kullanarak bulan programý yazýn
    */

    int num;
    printf("lutfen pozitif bir sayi giriniz : \n");
    scanf("%d",&num);

    tek_cift(num);







    return 0;
}
