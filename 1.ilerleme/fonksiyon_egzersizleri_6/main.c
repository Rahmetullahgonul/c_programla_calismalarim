#include <stdio.h>
#include <stdlib.h>

void sayiiste()
{
    int sayi;

    while(1)
    {
        printf("lutfen negatif bir sayi giriniz : \n");
        scanf("%d",&sayi);

        if(sayi<0)
        {
            printf("girdiginiz negatif sayi degeri = %d",sayi);
            break;
        }
    }

}



int main()
{


    /* soru :
    klavyeden negatif bir deðer girilinceye kadar kullanýcýdan sürekli sayi isteyen
    c programýný fonksiyon kullanarak yazýn
    */

  sayiiste();



















    return 0;
}
