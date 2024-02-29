#include <stdio.h>
#include <stdlib.h>


float karekok(float girilen_sayi)
{
    int i;
    float kare;
    if(girilen_sayi>0)
    {
        kare=girilen_sayi/2;
        for(i=1; i<=50; i++)
        {
            kare = ((kare*kare)+girilen_sayi/(2*kare));
        }
        return kare;

    }
    else if(girilen_sayi==0)
    {
        return 0;
    }
    else
    {
        printf("lutfen gecerli bir deger giriniz ");
    }

}



int main()
{
    /* soru:
    kullan�c� taraf�ndan girilen bir N pozitif tamsay�s�n�n karek�k�n�n bulnmas�n�
    sa�layan(sqrt()kullanmadan) c program�n� yaz�n;
    K=A/2
    karak�k=toplam 1 den 50 ye kadar k^2+A/2k
    */

    float kok;
    printf("karakoku alinacak sayi : \n");
    scanf("%f",&kok);
    printf("%.1f sayisinin karekoku = %.1f",kok,karekok(kok));
    return 0;
}
