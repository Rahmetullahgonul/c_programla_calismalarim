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
    klavyeden negatif bir de�er girilinceye kadar kullan�c�dan s�rekli sayi isteyen
    c program�n� fonksiyon kullanarak yaz�n
    */

  sayiiste();



















    return 0;
}
